#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x[n],max[n];
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	int tien=0;
	for(int i=0;i<n;i++){
		max[i]=1;
		for(int j=0;j<i;j++){
			if(x[i]>x[j]){
				if(max[j]>max[i]-1){
					max[i]=max[j]+1;
				}
			}
		}
		if(tien<max[i]){
			tien=max[i];
		}
	}
	cout<<tien;
	return 0;
}
