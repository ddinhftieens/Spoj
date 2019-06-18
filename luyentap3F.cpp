#include<iostream>
#define mod 1000000007
using namespace std;
long long tien(int a,long long n){
	if(n==1) return a;
	long long ans=tien(a,n/2);
	long long t=ans*ans%mod;
	if(n%2==1) t=t*a%mod;
	return t;
}
int main(){
	long long n;
	cin>>n;
	cout<<tien(3,n-1);
	return 0;
}
