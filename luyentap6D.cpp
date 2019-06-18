#include<iostream>
using namespace std;
int n,m,soluong=0;
char x[55][55];
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
int loang(int i,int j){
	int value=0;
	for(int u=i-1;u<=i+1;u++){
		for(int v=j-1;v<=j+1;v++){
			if(x[u][v]=='o'){
				value++;
			}
		}
	}
	return value;
}
void tien(){
	int value_1=0,a=0,b=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(x[i][j]=='.'){
				int k=loang(i,j);
				if(k>value_1){
					value_1=k;
					a=i;
					b=j;
				}
			}
		}
	}
	if(a!=0&&b!=0) x[a][b]='o';
}
void tien_2(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(x[i][j]=='o'){
				x[i][j]='.';
				soluong+=loang(i,j);
			}
		}
	}
	cout<<soluong;
}
int main(){
	input();
	tien();
	tien_2();
	return 0;
}
