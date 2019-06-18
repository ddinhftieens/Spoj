#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main(){
	int n,k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		long x[k],y[k];
		for(int j=0;j<k;j++){
			cin>>x[j];
			y[j]=x[j];
		}
		sort(x,x+k);
		long long tich=k*x[0];
		stack<long> tien;
		for(int j=0;j<k;j++){
			
		}
		cout<<tich<<endl;
	}
	return 0;
}
