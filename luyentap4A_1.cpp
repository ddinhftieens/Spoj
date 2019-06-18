#include<iostream>
#include<cmath>
#include<list>
using namespace std;
struct tien{
	int heso,somu;
};
typedef struct tien TIEN;
int chuyendoi(string s){
	int t=0,n=s.length();
	for(int i=0;i<s.length();i++){
		t+=(s[i]-'0')*pow(10,n-i-1);
	}
	return t;
}
void tach(string s,list<TIEN> &tien_1){
	string c="";
	int i=0;
	tien TIEN_0;
	while(i<s.length()){
		if(s[i]!=' '){
			c+=s[i];
		}else{
			string a="";
			for(int j=0;j<c.length();j++){
				if(c[j]!='*'){
					a+=c[j];
				}
				else break;
			}
			string b="";
			for(int j=c.length()-1;j>=0;j--){
				if(c[j]!='^'){
					b+=c[j];
				}
				else break;
			}
			TIEN_0.heso=chuyendoi(a);
			TIEN_0.somu=chuyendoi(b);
			tien_1.push_back(TIEN_0);
//			cout<<tien_1.back().heso<<" "<<tien_1.back().somu;
			c="";
			i=i+2;	
		}
		if(i==s.length()-1){
			string a="";
			for(int j=0;j<c.length();j++){
				if(c[j]!='*'){
					a+=c[j];
				}
				else break;
			}
			string b="";
			for(int j=c.length()-1;j>=0;j--){
				if(c[j]!='^'){
					b+=c[j];
				}
				else break;
			}
			TIEN_0.heso=chuyendoi(a);
			TIEN_0.somu=chuyendoi(b);
			tien_1.push_back(TIEN_0);
//			cout<<tien_1.back().heso<<" "<<tien_1.back().somu;
		}
		i++;
	}
}
void cong(list<TIEN> &tien_1,list<TIEN> &tien_2){
	list<TIEN> tien_3;
	while(1){
		if(tien_1.front().somu > tien_2.front().somu){
			tien_3.push_back(tien_1.front());
			tien_1.pop_front();
		}
		else if(tien_1.front().somu < tien_2.front().somu){
			tien_3.push_back(tien_2.front());
			tien_2.pop_front();
		}
		else{
			tien TIEN_1;
			TIEN_1.heso=tien_1.front().heso + tien_2.front().heso;
			TIEN_1.somu=tien_1.front().somu;
			tien_3.push_back(TIEN_1);
			tien_1.pop_front();
			tien_2.pop_front();
		}
		if(tien_1.empty()||tien_2.empty()) break;
	}
	while(!tien_1.empty()){
		tien_3.push_back(tien_1.front());
		tien_1.pop_front();
	}
	while(!tien_2.empty()){
		tien_3.push_back(tien_2.front());
		tien_2.pop_front();
	}
	while(!tien_3.empty()){
		if(tien_3.size()==1) cout<<tien_3.front().heso<<"*x^"<<tien_3.front().somu;
		else cout<<tien_3.front().heso<<"*x^"<<tien_3.front().somu<<" + ";
		tien_3.pop_front();
	}
	cout<<endl;
	tien_3.clear();
}
int main(){
	int v;
	cin>>v;
	while(v>0){
		string s1,s2;
		fflush(stdin);
		getline(cin,s1);
		getline(cin,s2);
		list<TIEN> tien_1;
		list<TIEN> tien_2;
		tach(s1,tien_1);
//		cout<<tien_1.front().heso<<" "<<tien_1.front().somu;
		tach(s2,tien_2);
		cong(tien_1,tien_2);
		tien_1.clear();
		tien_2.clear();
		v--;
	}
	return 0;
}
