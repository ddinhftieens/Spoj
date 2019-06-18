#include<iostream>
using namespace std;
int n,k,m,x[105],z[1005][1005],s[1005],chuaxet[1005];
void Init(){
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	for(int i=1;i<=k;i++){
		s[i]=0;
		for(int j=1;j<=k;j++){
			z[i][j]=0;
		}
	}
	int a,b;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		z[a][b]=1;
	}
}
void DFS(int t){
	s[t]++;
	chuaxet[t]=0;
	for(int i=1;i<=k;i++){
		if(z[t][i]&&chuaxet[i]){
			DFS(i);
		}
	}
}
void khoitao(){
	for(int i=1;i<=k;i++){
		chuaxet[i]=1;
	}
}
void quantity(){
	for(int i=1;i<=n;i++){
		khoitao();
		DFS(x[i]);
	}
	int value=0;
	for(int i=1;i<=k;i++){
		if(s[i]==n){
			value++;
		}
	}
	cout<<value;
}
int main(){
	Init();
	quantity();
	return 0;
}
