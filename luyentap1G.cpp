#include<bits/stdc++.h>
using namespace std;
int test,cot[10],xuoi[20],nguoc[20],x[10][10],y[10],fort=0;
void check(int k);
void xuat();
void Init(){
	cin>>test;
	while(test--){
		for(int i=1;i<=8;i++){
			cot[i]=1;
			for(int j=1;j<=8;j++){
				cin>>x[i][j];
			}
		}
		for(int i=1;i<2*8;i++){
			xuoi[i]=1;
			nguoc[i]=1;
		}
		check(1);
		cout<<fort<<endl;
	}
}
void check(int k){
	for(int i=1;i<=8;i++){
		if(cot[i]&&xuoi[k-i+8]&&nguoc[k+i-1]){
			y[k]=i;
			cot[i]=0;
			xuoi[k-i+8]=0;
			nguoc[k+i-1]=0;
			if(k==8) xuat();
			else check(k+1);
			cot[i]=1;
			xuoi[k-i+8]=1;
			nguoc[k+i-1]=1;
		}
	}
}
void xuat(){
	int total=0;
	for(int i=1;i<=8;i++){
		total+=x[i][y[i]];
	}
	if(total>fort) fort=total;
}
int main(){
	Init();
	return 0;
}
