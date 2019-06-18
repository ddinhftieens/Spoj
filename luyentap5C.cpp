#include<iostream>
using namespace std;
int n,x[105];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(x[j]>x[j+1]) swap(x[j],x[j+1]);
		}
		cout<<"Buoc "<<i+1<<": ";
		for(int k=0;k<n;k++){
			cout<<x[k]<<" ";
		}
		cout<<endl;
		bool OK=true;
		for(int k=0;k<n-1;k++){
			if(x[k]>x[k+1]){
				OK=false;
				break;
			}
		}
		if(OK) break;
	}
	return 0;
}
