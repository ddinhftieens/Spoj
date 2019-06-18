#include<bits/stdc++.h>
using namespace std;
map<string,long> tien;
map<string,long>::iterator it;
int main(){
	string s;
	while(cin>>s){
		tien[s]++;
	}
	cout<<tien.size()<<endl;
	for(it=tien.begin();it!=tien.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
