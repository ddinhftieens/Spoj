#include<iostream>
using namespace std;
int n,k;
long x[100005];
void tien(int l,int r){
	if(l<=r){
		long key=x[(l+r)/2];
		int i=l;
		int j=r;
		while(i<=j){
			while(x[i]<key) i++;
			while(x[j]>key) j--;
			if(i<=j){
			swap(x[i],x[j]);
			i++;
			j--;
			}
		}
		if(l<j) tien(l,j);
		if(r>i) tien(i,r);
	}
}
int main(){
	cin>>n;
	while(n>0){
		cin>>k;
		for(int i=0;i<k;i++){
			cin>>x[i];
		}
		tien(0,k-1);
		for(int i=0;i<k;i++){
			cout<<x[i]<<" ";
		}
		cout<<endl;
		n--;
	}
	return 0;
}
