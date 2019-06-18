#include<iostream>
using namespace std;
void tien(long int x[],long int l,long int r)
{
	if(l<=r){
		long int key=x[(l+r)/2];
		long int i=l;
		long int j=r;
		while(i<=j){
			while(x[i]<key){
				i++;
			}
			while(x[j]>key){
				j--;
			}
			if(i<=j){
				swap(x[i],x[j]);
				i++;
				j--;
			}
		}
		if(l<j) tien(x,l,j);
		if(r>i) tien(x,i,r);
	}
}
int main()
{
	long int n,k;
	cin>>n>>k;
	long int x[n];
	for(long int i=0;i<n;i++){
		cin>>x[i];
	}
	tien(x,1,n-1);
	long int tong=0;
	long int i=n-1;
	while(k>0&&i>=0){
		tong+=x[i];
		k--;
		i--;
	}
	tong+=x[0];
	for(long int j=1;j<=i;j++){
		tong-=x[j];
	}
	cout<<tong;
	return 0;
}
