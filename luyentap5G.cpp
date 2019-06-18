#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int t,n,tien;
long long x[100005],value;
int main(){
	cin>>t;
	while(t>0){
		cin>>n;
		tien=1;
		value=2000000005;
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		sort(x,x+n);
		for(int i=0;i<n-1;i++){
			if(abs(x[i]-x[i+1])<value){
				value=abs(x[i]-x[i+1]);
				tien=1;
			}
			else if(abs(x[i]-x[i+1])==value) tien++;
		}
		cout<<value<<" "<<tien<<endl;
		t--;
	}
	return 0;
}
