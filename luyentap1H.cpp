#include<bits/stdc++.h>
using namespace std;
int n,k,s,total,x[25];
void check(){
	int t=0;
	for(int i=1;i<=k;i++){
		t+=x[i];
	}
	if(t==s) total++;
}
void tohop(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if(i==k) check();
		else tohop(i+1);
	}
}
int main(){
	do{
		cin>>n>>k>>s;
		if(n!=0&&k!=0&&s!=0){
			x[0]=0;
			total=0;
			tohop(1);
			cout<<total<<endl;
		}
		
	}while(n!=0&&k!=0&&s!=0);
	return 0;
}
