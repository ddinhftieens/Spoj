#include<iostream>
#include<string>
using namespace std;
int t=1;
string tien_1(string z,int n)
{
	if(n==1) return z;
	while(n>1){
		string x="";
		for(long long int i=0;i<z.length()-1;i++){
			x+=z[i];
		}
		z=z+z[z.length()-1]+x;
		n--;
	}
	return z;
}
int main()
{
	string s;
	long long int k,tien;
	cin>>s;
	cin>>k;
	tien=s.length();
	while(1){
		if(k<tien){
			break;
		}
		tien=tien*2;
		t++;
	}
	string x=tien_1(s,t);
	cout<<x[k-1];
	return 0;
}
