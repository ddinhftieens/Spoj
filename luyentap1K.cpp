#include<bits/stdc++.h>
using namespace std;
int test,n,m,a[25][25],check[25],k,total;
void DFS(int i){
	check[i]=0;
	for(int j=0;j<n;j++){
		if(check[j]&&a[i][j]){
			k++;
			DFS(j);
		}
	}
	if(k>total) total=k;
	k--;
	check[i]=1;
}
int main(){
	cin>>test;
	while(test--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			check[i]=1;
			for(int j=0;j<n;j++){
				a[i][j]=0;
			}
		}
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			a[x][y]=1;
			a[y][x]=1;
		}
		k=0;
		total=0;
		for(int i=0;i<n;i++){
			DFS(i);
		}
		cout<<total<<endl;
	}
	return 0;
}
