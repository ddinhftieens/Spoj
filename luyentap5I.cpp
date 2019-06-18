#include<iostream>
#include<algorithm>
using namespace std;
long n,k,x[100005],y[100005];
long tien(long k_1){
	long dau=0,cuoi=n-1;
	long giua=(dau+cuoi)/2;
	while(dau<=cuoi){
		if(k_1>=x[giua]){
			dau=giua+1;
		}
		else if(k_1<x[giua]){
			cuoi=giua-1;
		}
		giua=(dau+cuoi)/2;
	}
	return cuoi+1;
}
int main(){
	cin>>n;
	for(long i=0;i<n;i++){
		cin>>x[i];
	}
	cin>>k;
	for(long i=0;i<k;i++){
		cin>>y[i];
	}
	sort(x,x+n);
	long j=0;
	while(j<k){
		cout<<tien(y[j])<<endl;
		j++;
	}
	return 0;
}
