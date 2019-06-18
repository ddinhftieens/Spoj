#include<iostream>
using namespace std;
int a[205][40005];
int main(){
	int t;
	cin>>t;
	while(t>0){
		int n,S,x[205];
		cin>>n>>S;
		for(int i=1;i<=n;i++){
			cin>>x[i];
		}
		for(int i=0;i<=n;i++){
			a[i][0]=1;
		}
		for(int i=1;i<=n;i++){
			for(int j=0;j<=S;j++){
				if(j>=x[i]){
					a[i][j]=a[i-1][j]==1?1:a[i-1][j-x[i]]==1?1:0;
				}
				else a[i][j]=a[i-1][j];
			}
		}
		if(a[n][S]==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		t--;
	}
	return 0;
}
