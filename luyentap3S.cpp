#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int> tien;
	long int n;
	cin>>n;
	for(long int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s=="PUSHFRONT"){
			int k;
			cin>>k;
			tien.push_front(k);
		}
		else if(s=="PRINTFRONT"){
			if(tien.empty()){
				cout<<"NONE"<<endl;
			}
			else cout<<tien.front()<<endl;
		}
		else if(s=="POPFRONT"){
			if(!tien.empty()){
				tien.pop_front();
			}
		}
		else if(s=="PUSHBACK"){
			int k;
			cin>>k;
			tien.push_back(k);
		}
		else if(s=="PRINTBACK"){
			if(tien.empty()){
				cout<<"NONE"<<endl;
			}
			else cout<<tien.back()<<endl;
		}
		else {
			if(!tien.empty()){
				tien.pop_back();
			}
		}
	}
	return 0;
}
