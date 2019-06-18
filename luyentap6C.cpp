#include<iostream>
#include<deque>
using namespace std;
int n,m;
char x[105][105];
deque<int> tien_1;
void input(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>x[i][j];
		}
	}
	for(int i=0;i<=n+1;i++){
		x[i][0]='.';
		x[i][m+1]='.';
	}
	for(int j=0;j<=m+1;j++){
		x[0][j]='.';
		x[n+1][j]='.';
	}
}
void loang(int i,int j){
	x[i][j]='.';
	for(int u=i-1;u<=i+1;u++){
		for(int v=j-1;v<=j+1;v++){
			if(x[u][v]=='W'){
				x[u][v]='.';
				tien_1.push_front(u);
				tien_1.push_back(v);
			}
		}
	}
}
void tien(){
	int value=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(x[i][j]=='W'){
				loang(i,j);
				while(!tien_1.empty()){
					int e=tien_1.front(),f=tien_1.back();
					tien_1.pop_back();
					tien_1.pop_front();
					loang(e,f);
				}
				value++;
			}
		}
	}
	cout<<value;
}
int main(){
	input();
	tien();
	return 0;
}
