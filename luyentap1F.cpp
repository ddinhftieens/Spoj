#include<bits/stdc++.h>
using namespace std;
int n,cot[20],xuoi[30],nguoc[30],total=0,x[20];
void Init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cot[i]=1;
	}
	for(int i=1;i<2*n;i++){
		xuoi[i]=1;
		nguoc[i]=1;
	}
}
void check(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]&&xuoi[i-j+n]&&nguoc[i+j-1]){
			x[i]=j;
			cot[j]=0;
			xuoi[i-j+n]=0;
			nguoc[i+j-1]=0;
			if(i==n) total++;
			else check(i+1);
			cot[j]=1;
			xuoi[i-j+n]=1;
			nguoc[i+j-1]=1;
		}
	}
}
int main(){
	Init();
	check(1);
	cout<<total;
	return 0;
}
