#include<bits/stdc++.h>
using namespace std;
int test,n,k,x[45],y[45];
int main(){
	cin>>test;
	while(test--){
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>x[i];
			y[i]=x[i];
		}
		int i=k;
		while(i>0){
			if(x[i]==n-k+i) i--;
			else break;
		}
		if(i==0) cout<<k<<endl;
		else{
			x[i]=x[i]+1;
			for(int j=i+1;j<=k;j++){
				x[j]=x[j-1]+1;
			}
			int total=0;
			for(int j=1;j<=k;j++){
				for(int z=1;z<=k;z++){
					if(y[j]==x[z]){
						total++;
						break;
					}
				}
			}
			cout<<k-total<<endl;
		}
	}
	return 0;
}
