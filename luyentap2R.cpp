#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int k;
	string x,y;
	cin>>k;
	cin>>x>>y;
	if(x.length()>y.length()){
		y.insert(0,x.length()-y.length(),'0');
	}
	else if(x.length()<y.length()){
		x.insert(0,y.length()-x.length(),'0');
	}
	string c="";
	int nho=0;
	for(int i=x.length()-1;i>=0;i--){
		if((x[i]-'0'+y[i]-'0'+nho)<k){
			c+=((x[i]-'0'+y[i]-'0'+nho)+'0');
			nho=0;
		}
		else{
			c+=(((x[i]-'0'+y[i]-'0'+nho)-k)+'0');
			nho=1;
		}
	}
	if(nho!=0) c+=(nho+'0');
	reverse(c.begin(),c.end());
	cout<<c;
	return 0;
}
