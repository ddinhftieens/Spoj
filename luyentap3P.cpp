#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<long long> tien;
	long long n,k,x;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>k;
		for(long long j=0;j<k;j++){
			cin>>x;
			if(x==1) cout<<tien.size()<<endl;
			else if(x==2){
				if(tien.empty()){
					cout<<"YES"<<endl;
				}
				else cout<<"NO"<<endl;
			}
			else if(x==3){
				long long s;
				cin>>s;
				tien.push(s);
			}
			else if(x==4){
				if(!tien.empty()){
					tien.pop();
				}
			}
			else if(x==5){
				if(tien.empty()){
					cout<<-1<<endl;
				}
				else cout<<tien.front()<<endl;
			}
			else if(x==6){
				if(tien.empty()){
					cout<<-1<<endl;
				}
				else cout<<tien.back()<<endl;
			}
		}
	}
	return 0;
}
