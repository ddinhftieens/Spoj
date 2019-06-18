#include<bits/stdc++.h>
#define Tien 1000000
using namespace std;
int top,edge,a[105][105];
long d[105][105];
int main(){
	cin>>top>>edge;
	for(int i=1;i<=top;i++){
		for(int j=1;j<=top;j++){
			a[i][j]=0;
		}
	}
	for(int i=1;i<=edge;i++){
		int x,y,z;
		cin>>x>>y>>z;
		a[x][y]=z;
		a[y][x]=z;
	}
	for(int i=1;i<=top;i++){
		for(int j=1;j<=top;j++){
			if(a[i][j]==0&&i!=j) d[i][j]=Tien;
			else d[i][j]=a[i][j];
		}
	}
	for(int k=1;k<=top;k++){
		for(int i=1;i<=top;i++){
			for(int j=1;j<=top;j++){
				if(d[i][k]!=Tien&&d[i][j]>d[i][k]+d[k][j]){
					d[i][j]=d[i][k]+d[k][j];
				}
			}
		}
	}
	int test;
	cin>>test;
	while(test--){
		int top_start,top_end;
		cin>>top_start>>top_end;
		cout<<d[top_start][top_end]<<endl;
	}
	return 0;
}
