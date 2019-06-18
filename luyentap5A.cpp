#include<iostream>
using namespace std;
int n,x[105];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	int tien,vitri;
	for(int i=0;i<n-1;i++){
		vitri=i;
		for(int j=i+1;j<n;j++){
			if(x[j]<x[vitri]){
				vitri=j;
			}
		}
		swap(x[i],x[vitri]);
		cout<<"Buoc "<<i+1<<": ";
		for(int k=0;k<n;k++){
			cout<<x[k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
