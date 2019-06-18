#include<iostream>
#define MAX 40005
using namespace std;
int x[MAX];
int main(){
	int n,k;
	cin>>n>>k;
	int s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	x[k]=0;
	x[0]=1;
	for(int i=0;i<n;i++){
		for(int j=k;j>=s[i];j--){
			if(x[j]==0||x[j-s[i]]==1){
				x[j]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
	return 0;
}
