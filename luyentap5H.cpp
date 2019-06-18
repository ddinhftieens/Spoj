#include<iostream>
using namespace std;
int t,n;
long k,x[100005];
int tien(){
	int dau=0,cuoi=n-1;
	int giua=(dau+cuoi)/2;
	while(dau<=cuoi){
		if(k>x[giua]){
			dau=giua+1;
		}
		else if(k<x[giua]){
			cuoi=giua-1;
		}
		else return giua;
		giua=(dau+cuoi)/2;
	}
	return -1;
}
int main(){
	cin>>t;
	while(t>0){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		if(tien()!=-1) cout<<tien()+1<<endl;
		else cout<<"NO"<<endl;
		t--;
	}
	return 0;
}
