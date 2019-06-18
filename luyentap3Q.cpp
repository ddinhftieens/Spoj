#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<string> tien;
	long int n;
	string s;
	cin>>n;
	for(long int i=0;i<n;i++){
		cin>>s;
		if(s=="PUSH"){
			string c;
			cin>>c;
			tien.push(c);
		}
		else if(s=="PRINTFRONT"){
			if(!tien.empty()){
				cout<<tien.front()<<endl;
			}
			else cout<<"NONE"<<endl;
		}
		else{
			if(!tien.empty()){
				tien.pop();
			}
		}
	}
	return 0;
}
