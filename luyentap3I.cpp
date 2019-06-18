#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> tien;
	long int n;
	cin>>n;
	for(long int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int k;
			cin>>k;
			tien.push(k);
		}
		else if(s=="PRINT"){
			if(tien.empty()){
				cout<<"NONE"<<endl;
			}
			else cout<<tien.top()<<endl;
		}
		else{
			if(!tien.empty()){
				tien.pop();
			}
		}
	}
	return 0;
}
