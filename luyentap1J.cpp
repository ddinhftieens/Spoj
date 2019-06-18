#include<bits/stdc++.h>
using namespace std;
int test,x[10],y[10],z[10],t[10],check[10];
bool OK;
void xuat(){
	int total=0;
	if(y[1]==0) total=x[1]+x[2];
	else if(y[1]==1) total=x[1]-x[2];
	else if(y[1]==2) total=x[1]*x[2];
	if(y[2]==0) total+=x[3];
	else if(y[2]==1) total-=x[3];
	else if(y[2]==2) total*=x[3];
	if(y[3]==0) total+=x[4];
	else if(y[3]==1) total-=x[4];
	else if(y[3]==2) total*=x[4];
	if(y[4]==0) total+=x[5];
	else if(y[4]==1) total-=x[5];
	else if(y[4]==2) total*=x[5];
	if(total==23){
		cout<<"YES"<<endl;
		OK=false;
	}
}
void sinh(int i){
	for(int j=0;j<=2;j++){
		if(OK){
			y[i]=j;
			if(i==4) xuat();
			else sinh(i+1);
		}
		else break;
	}
}
void kiemtra(){
	x[1]=t[z[1]];
	x[2]=t[z[2]];
	x[3]=t[z[3]];
	x[4]=t[z[4]];
	x[5]=t[z[5]];
	sinh(1);
}
void hoanvi(int i){
	for(int j=1;j<=5;j++){
		if(OK){
			if(check[j]){
				z[i]=j;
				check[j]=0;
				if(i==5) kiemtra();
				else hoanvi(i+1);
				check[j]=1;
			}
		}
		else break;
	}
}
int main(){
	cin>>test;
	while(test--){
		OK=true;
		for(int i=1;i<=5;i++){
			check[i]=1;
			cin>>t[i];
		}
		hoanvi(1);
		if(OK) cout<<"NO"<<endl;
	}
	return 0;
}
