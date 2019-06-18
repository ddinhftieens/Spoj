#include<bits/stdc++.h>
using namespace std;
int n,total,column[100],x[100][100],y[100];
vector<string> tien;
void Init(){
	cin>>n>>total;
	for(int i=1;i<=n;i++){
		column[i]=1;
		for(int j=1;j<=n;j++){
			cin>>x[i][j];
		}
	}
}
void kiemtra(){
	int k=0;
	for(int i=1;i<=n;i++){
		k+=x[i][y[i]];
	}
	if(k==total){
		string s="";
		for(int i=1;i<=n;i++){
			s+=y[i]+'0';
		}
		tien.push_back(s);
	}
}
void check(int k){
	for(int i=1;i<=n;i++){
		if(column[i]){
			y[k]=i;
			column[i]=0;
			if(k==n) kiemtra();
			else check(k+1);
			column[i]=1;
		}
	}
}
int main(){
	Init();
	check(1);
	cout<<tien.size()<<endl;
	for(int i=0;i<tien.size();i++){
		for(int j=0;j<tien[i].length();j++){
			cout<<tien[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
