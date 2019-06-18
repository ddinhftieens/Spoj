#include<bits/stdc++.h>
using namespace std;
int test;
long n,m,parent[200005];
struct edge_1{
	long top_start,top_end,length_edge;
};
struct edge_1 edge[200005];
bool comp(edge_1 a,edge_1 b){
	return a.length_edge<b.length_edge;
}
long find(long x){
	while(parent[x]>0){
		x=parent[x];
	}
	return x;
}
void Union(long x,long y){
	long k=parent[x]+parent[y];
	if(parent[x]>parent[y]){
		parent[x]=y;
		parent[y]=k;
	}
	else{
		parent[y]=x;
		parent[x]=k;
	}
}
void Init(){
	cin>>n>>m;
	for(long i=1;i<=m;i++){
		cin>>edge[i].top_start>>edge[i].top_end>>edge[i].length_edge;
	}
	memset(parent,-1,(n+1)*sizeof(long));
	parent[0]=0;
}
void kruskal(){
	long long total=0;
	sort(edge+1,edge+1+m,comp);
	for(long i=1;i<=m;i++){
		long x=find(edge[i].top_start);
		long y=find(edge[i].top_end);
		if(x!=y){
			total+=edge[i].length_edge;
			Union(x,y);
		}
	}
	cout<<total<<endl;
}
int main(){
	cin>>test;
	while(test--){
		Init();
		kruskal();
	}
	return 0;
}
