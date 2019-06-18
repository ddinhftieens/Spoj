#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		stack<string> tien;
		long int value=0;
		for(long int j=0;j<s.length();j++){
			string c="";
			c=s[j];
			if(c=="("){
				tien.push(c);
			}
			else{
				if(!tien.empty()){
					value+=2;
					tien.pop();
				}
			}
		}
		cout<<value<<endl;
	}
	return 0;
}
