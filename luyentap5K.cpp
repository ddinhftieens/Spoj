#include<iostream>
using namespace std;
int n,k,x[2][100005];
void tien(int l,int r){
	if(l<=r){
		int key=x[1][(l+r)/2];
		int i=l;
		int j=r;
		while(x[1][i]<key) i++;
		while(x[1][j]>key) j--;
		if(i<=j){
			swap(x[1][i],x[1][j]);
			swap(x[0][i],x[0][j]);
			i++;
			j--;
		}
		if(l<j) tien(l,j);
		if(r>i) tien(i,r);
	}
}
int main(){
	cin>>n>>k;
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			cin>>x[i][j];
		}
	}
	tien(0,n-1);
	for(int i=0;i<n-1;i++){
		if(x[])
	}
	long long value=0;
	for(int i=0;i<k;i++){
		value+=x[0][i];
	}
	for(int i=k;i<n;i++){
		value+=x[1][i];
	}
	return 0;
}
