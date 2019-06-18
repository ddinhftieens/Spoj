#include<iostream>
#define MOD 1000000007
using namespace std;
long long tien(int k,int n){
	if(n==k||k==0) return 1;
	long long tien_1=(tien(k,n-1)%MOD+tien(k-1,n-1)%MOD);
	return tien_1;
//	if(n==1) return 1;
//	return n*tien(n-1)%MOD;
}
int main(){
	int t,n,k;
	cin>>t;
	while(t>0){
		cin>>n>>k;
		cout<<tien(k,n)<<endl;
		t--;
	}
	return 0;
}
