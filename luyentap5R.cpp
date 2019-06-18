#include<iostream>
#define MOD 1000000007
using namespace std;
long long x[105][905];
void khoitao(int n,int k){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=k;j++){
			x[i][j]=-1;
		}
	}
}
long long tien_1(int n,int k){
	if(n==0) return k==0;
	if(x[n][k]!=-1) return x[n][k];
	long long ketqua=0;
	for(int i=0;i<=9;i++){
		if(k-i>=0){
			ketqua=(ketqua+tien_1(n-1,k-i))%MOD;
		}
	}
	return x[n][k]=ketqua;
}
long long tien(int n,int k){
	long long ketqua=0;
	for(int i=1;i<=9;i++){
		if(k-i>=0){
			ketqua=(ketqua+tien_1(n-1,k-i))%MOD;
		}
	}
	return ketqua;
}
int main(){
	int t,n,k;
	cin>>t;
	while(t>0){
		cin>>n>>k;
		khoitao(n,k);
		cout<<tien(n,k)<<endl;
		t--;
	}
	return 0;
}
