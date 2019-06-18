#include<bits/stdc++.h>
using namespace std;
int test,k;
string s;
void swap(char &x, char &y){
	char temp=x;
	x=y;
	y=temp;
}
int main(){
	cin>>test;
	while(test--){
		fflush(stdin);
		cin>>k;
		cin>>s;
		int i=s.length()-1;
		while(i>0){
			if(s[i]<=s[i-1]) i--;
			else break;
		}
		if(i==0) cout<<k<<" BIGGEST"<<endl;
		else{
			int j=s.length()-1;
			while(j>=0){
				if(s[j]>s[i-1]){
					swap(s[j],s[i-1]);
					break;
				}
				j--;
			}
			reverse(s.begin()+i,s.end());
			cout<<k<<" "<<s<<endl;
		}
	}
	return 0;
}
