#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long int luythua(long long int n,long long int k){
	if(k==1) return n;
	long long int tg=luythua(n,k/2);
	tg=(tg*tg)%MOD;
	if(k%2==1) tg=(tg*n)%MOD;
	return tg;
}
int main(){
	long long int k;
	int test,n;
	cin>>test;
	while(test--){
		cin>>n>>k;
		cout<<luythua(n,k)<<endl;
	}
	return 0;
}
