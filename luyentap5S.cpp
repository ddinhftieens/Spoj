#include<iostream>
#define MOD 1000000007
using namespace std;
long long x[105][15];
void khoitao(int n){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=15;j++){
			x[i][j]=-1;
		}
	}
}
long long tien_1(int n,int k){
	if(n==1) return 9-k+1;
	if(x[n][k]!=-1) return x[n][k];
	long long ketqua=0;
	if(k==9) ketqua=(ketqua+tien_1(n-1,k))%MOD;
	else{
		for(int i=k;i<=9;i++){
			ketqua=(ketqua+tien_1(n-1,i))%MOD;	
		}
	}
	return x[n][k]=ketqua;
}
long long tien(int n){
	if(n==1) return 10;
	long long ketqua=0;
	for(int i=0;i<=9;i++){
		ketqua=(ketqua+tien_1(n-1,i))%MOD;
	}
	return ketqua;
}
int main(){
	int t,n;
	cin>>t;
	while(t>0){
		cin>>n;
		khoitao(n);
		cout<<tien(n)<<endl;
		t--;
	}
	return 0;
}
