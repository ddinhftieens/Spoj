#include<iostream>
#include<string>
using namespace std;
int main()
{
	int x[255],n,k;
	string s;
	cin>>n>>k;
	cin>>s;
	for(int i=0;i<255;i++){
		x[i]=0;
	}
	for(int i=0;i<s.length();i++){
		x[s[i]]++;
	}
	string c="";
	int tien=0,l;
	while(l<k){
		if(s[tien]<s[tien+1]&&s[tien]!='*'){
			s[tien]='*';
//			x[s[tien]]--;
			tien=0;
			l++;
		}
		else tien++;
	}
//	k=k-tien;
//	for(int i=0;i<255;i++){
//		int j=0;
//		if(x[i]!=0&&k!=0){
//			int l=1;
//			while(l<=x[i]&&l<=k){
//				if(int (s[j])==i){
//					s[j]='*';
//					l++;
//				}
//				j++;
//			}
//			k=k-l+1;
//		}
//	}
	for(int i=0;i<s.length();i++){
		if(s[i]!='*'){
			c+=s[i];
		}
	}
	cout<<c;
	return 0;
}
