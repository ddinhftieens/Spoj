#include<iostream>
#include<queue>
using namespace std;
int test,top,edge,query,x[1005][1005],s[1005],chuaxet[1005];
int BFS(int a,int b){
	for(int i=1;i<=top;i++){
		s[i]=0;
		chuaxet[i]=1;
	}
	queue<int> ciu;
	ciu.push(a);
	s[a]++;
	chuaxet[a]=0;
	while(!ciu.empty()){
		int front=ciu.front();
		ciu.pop();
		for(int i=1;i<=top;i++){
			if(x[front][i]&&chuaxet[i]){
				s[i]++;
				ciu.push(i);
				chuaxet[i]=0;
			}
		}
	}
	for(int i=a;i<=b;i++){
		if(s[i]==0){
			return 0;
		}
	}
	return 1;
}
void Init(){
	cin>>test;
	while(test--){
		cin>>top>>edge;
		for(int i=1;i<=top;i++){
			for(int j=1;j<=top;j++){
				x[i][j]=0;
			}
		}
		int a,b;
		while(edge--){
			cin>>a>>b;
			x[a][b]=1;
			x[b][a]=1;
		}
		cin>>query;
		while(query--){
			cin>>a>>b;
			if(BFS(a,b)) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}
int main(){
	Init();
	return 0;
}
