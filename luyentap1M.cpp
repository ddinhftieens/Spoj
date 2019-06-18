#include<bits/stdc++.h>
using namespace std;
int test,money,x[10]={1,2,5,10,20,50,100,200,500,1000};
int main(){
	cin>>test;
	while(test--){
		cin>>money;
		int i=9,total=0;
		while(i>=0){
			if(money>=x[i]){
				total+=money/x[i];
				money=money-(money/x[i])*x[i];
			}
			i--;
		}
		cout<<total<<endl;
	}
	return 0;
}
