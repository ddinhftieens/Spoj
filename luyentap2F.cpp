#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	long int s;
	cin>>n>>s;
	long int x[n];
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	sort(x,x+n);
	int k=n-1,tien=0;
	while(k>=0&&s!=0){
		int t;
		if(x[k]<=s){
			tien+=s/x[k];
			t=s/x[k];
			s=s-t*x[k];
		}
		k--;
	}
	cout<<tien;
	return 0;
}
