#include<iostream>
using namespace std;
int n,x[105];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	for(int i=0;i<n;i++){
		int key=x[i];
		int j=i-1;
		while(j>=0&&x[j]>key){
			x[j+1]=x[j];
			j=j-1;
		}
		x[j+1]=key;
		cout<<"Buoc "<<i<<": ";
		for(int k=0;k<i+1;k++){
			cout<<x[k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
