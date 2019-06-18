#include<iostream>
using namespace std;
int n,x[1005][1005];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>x[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(x[i][j]){
				cout<<j+1<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
