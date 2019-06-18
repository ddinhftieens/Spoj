#include<iostream>
#include<algorithm>
using namespace std;
int t,n,c,d;
long x[100005];
int main(){
	cin>>t;
	while(t>0){
		float value=0;
		long tong=0;
		cin>>n>>c>>d;
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		sort(x,x+n);
		if(c<d){
			for(int i=n-1;i>=n-c;i--){
				tong+=x[i];
			}
			value=(float) tong/c;
			tong=0;
			for(int i=n-c-1;i>=n-c-d;i--){
				tong+=x[i];
			}
			value+=(float) tong/d;
			cout.precision(6);
			cout<<fixed<<value<<endl;
		}
		else{
			for(int i=n-1;i>=n-d;i--){
				tong+=x[i];
			}
			value=(float) tong/d;
			tong=0;
			for(int i=n-d-1;i>=n-d-c;i--){
				tong+=x[i];
			}
			value+=(float) tong/c;
			cout.precision(6);
			cout<<fixed<<value<<endl;
		}
		t--;
	}
	return 0;
}
