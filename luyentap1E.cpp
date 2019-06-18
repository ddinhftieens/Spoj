#include<bits/stdc++.h>
using namespace std;
int test,n,k,x[20];
void Init(){
	for(int i=1;i<=n;i++){
		x[i]=0;
	}
}
bool check(){
	for(int i=1;i<=n;i++){
		if(x[i]==0) return true;
	}
	return false;
}
void sinh(){
	int i=n;
	while(i>0&&x[i]!=0){
		x[i]=0;
		i--;
	}
	x[i]=1;
}
void kiemtra(){
	int total=0;
	for(int i=1;i<=n;i++){
		if(x[i]==1){
			total++;
		}
	}
	if(total==k){
		for(int i=1;i<=n;i++){
			cout<<x[i];
		}
		cout<<endl;
	}
}
void quaylui(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n) kiemtra();
		else quaylui(i+1);
	}
}
int main(){
	cin>>test;
	while(test--){
		cin>>n>>k;
		Init();
//		kiemtra();
//		while(check()){
//			sinh();
//			kiemtra();
//		}
		quaylui(1);
	}
	return 0;
}
