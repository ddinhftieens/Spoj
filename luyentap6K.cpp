#include<iostream>
#include<queue>
using namespace std;
int test,top,x[1005][1005],check[1005],s[1005];
int BFS(int value){
	for(int i=1;i<=top;i++){
		check[i]=1;
		s[i]=0;
	}
	queue<int> kiu;
	kiu.push(value);
	s[value++];
	check[value]=0;
	while(!kiu.empty()){
		int front=kiu.front();
		kiu.pop();
		for(int i=1;i<=top;i++){
			if(x[front][i]&&check[i]){
				kiu.push(i);
				s[i]++;
				check[i]=0;
			}
		}
	}
	for(int i=1;i<=top;i++){
		if(s[i]==0) return 0;
	}
	return 1;
}
void Init(){
	cin>>test;
	while(test--){
		cin>>top;
		for(int i=1;i<=top;i++){
			for(int j=1;j<=top;j++){
				x[i][j]=0;
			}
		}
		int a,b;
		for(int i=1;i<top;i++){
			cin>>a>>b;
			x[a][b]=1;
			x[b][a]=1;
		}
		bool OK=true;
		for(int i=1;i<=top;i++){
			if(BFS(i)){
				OK=false;
				cout<<"YES"<<endl;
				break;
			}
		}
		if(OK) cout<<"NO"<<endl;
	}
}
int main(){
	Init();
	return 0;
}
