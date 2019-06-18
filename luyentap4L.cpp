#include<iostream>
#include<string>
#define max 1006
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int c[max][max];
	for(int i=0;i<=s1.length();i++){
		c[i][0]=0;
	}
	for(int i=0;i<=s2.length();i++){
		c[0][i]=0;
	}
	for(int i=1;i<=s1.length();i++){
		for(int j=1;j<=s2.length();j++){
			string a="",b="";
			a=s1[i-1];b=s2[j-1];
			if(a==b){
				c[i][j]=c[i-1][j-1]+1;
			}
			else{
				if(c[i-1][j]>=c[i][j-1]){
					c[i][j]=c[i-1][j];
				}
				else c[i][j]=c[i][j-1];
			}
		}
	}
	cout<<c[s1.length()][s2.length()];
	return 0;
}
