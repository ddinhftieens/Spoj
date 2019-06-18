#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n>0){
		int k;
		cin>>k;
		long x[k];
		for(int i=0;i<k;i++){
			cin>>x[i];
		}
		int j=1;
		long a=0;
		for(int i=0;i<k-1;i++){
			bool OK=true;
			if(x[i]>=a){
				if(i==j) j++;
				while(j<k){
					if(x[i]<x[j]){
						cout<<x[j]<<" ";
						OK=false;
						break;
					}
					j++;
				}
				if(OK) cout<<-1<<" ";
				a=x[i];
			}
			else{
				j=i+1;
				while(j<k){
					if(x[i]<x[j]){
						cout<<x[j]<<" ";
						OK=false;
						break;
					}
					j++;
				}
				if(OK) cout<<-1<<" ";
				a=x[i];
			}
		}
		cout<<-1<<endl;
		n--;
	}
	return 0;
}
