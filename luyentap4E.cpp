#include<iostream>
#define max 100005
using namespace std;
long long x[max];
int main(){
	int t;
	cin>>t;
	while(t>0){
		long long value=0;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		for(int i=0;i<n;i++){
			int k=0;
			for(int j=i;j<n;j++){
				if(x[j]>=x[i]){
					k++;
				}
				else break;
			}
			for(int j=i-1;j>=0;j--){
				if(x[j]>=x[i]){
					k++;
				}
				else break;
			}
			if(k>=x[i]&&value<x[i]){
				value=x[i];
			}
		}
		cout<<value<<endl;
		t--;
	}
	return 0;
}
