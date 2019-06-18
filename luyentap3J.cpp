#include<iostream>
#include<stack>
using namespace std;
int tien_1(string s){
	if(s=="*"||s=="/"){
		return 2;
	}
	else return 1;
}
int main()
{
	long int n;
	cin>>n;
	for(long int i=0;i<n;i++){
		string s,t="";
		stack<string> tien;
		cin>>s;
		for(long int j=0;j<s.length();j++){
			string c="";
			c=s[j];
			if(s[j]=='('){
				tien.push(c);
			}
			else if(s[j]=='+'||s[j]=='-'||s[j]=='*'||s[j]=='/'){
				if(tien.empty()) tien.push(c);
				else if(tien_1(tien.top())>=tien_1(c)&&tien.top()!="("){
					t+=tien.top();
					tien.pop();
					tien.push(c);
				}
				else tien.push(c);
			}
			else if(s[j]==')'){
				while(!tien.empty()){
					if(tien.top()!="("){
						t+=tien.top();
						tien.pop();
					}
					else{
						tien.pop();
						break;
					}	
				}
			}
			else t+=s[j];
		}
		while(!tien.empty()){
			t+=tien.top();
			tien.pop();
		}
		cout<<t<<endl;
	}
	return 0;
}
