#include<iostream>
#include<algorithm>
using namespace std;
int n,k;
long x[100005],y[100005];
bool check(){
	for(int i=0;i<k-1;i++){
		if(x[i]>x[i+1]){
			return false;
		}
	}
	return true;
}
void tien(int l,int r){
	if(l<=r){
		long key=y[(l+r)/2];
		int i=l;
		int j=r;
		while(i<=j){
			while(y[i]<key) i++;
			while(y[j]>key) j--;
			if(i<=j){
				swap(y[i],y[j]);
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
			y[i]=x[i];
		}
		if(check()) cout<<"YES"<<endl;
		else{
			tien(0,k-1);
			int z=0;
			while(z<k){
				if(x[z]!=y[z]) break;
				z++;
			}
			int t=k-1;
			while(t>=0){
				if(x[t]!=y[t]) break;
				t--;
			}
			cout<<k-z-(k-1-t)<<endl;
		}
		n--;
	}
	return 0;
}
