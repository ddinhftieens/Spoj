#include<iostream>
#include<string>
#define max 1005
using namespace std;
int c[max][max];
int main(){
	int t;
	cin>>t;
	while(t>0){
		string s1;
		cin>>s1;
		for(int i=0;i<=s1.length();i++){
			c[i][0]=0;
			c[0][i]=0;
		}
		for(int i=1;i<=s1.length();i++){
			for(int j=s1.length();j>=1;j--){
				string a="",b="";
				a=s1[i-1];b=s1[j-1];
				if(a==b){
					c[i][s1.length()-j+1]=c[i-1][s1.length()-j]+1;
				}
				else{
					if(c[i-1][s1.length()-j+1]>=c[i][s1.length()-j]){
						c[i][s1.length()-j+1]=c[i-1][s1.length()-j+1];
					}
					else c[i][s1.length()-j+1]=c[i][s1.length()-j];
				}
			}
		}
		cout<<c[s1.length()][s1.length()]<<endl;
		t--;	
	}
	return 0;
}
