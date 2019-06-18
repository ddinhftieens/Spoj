#include<bits/stdc++.h>
using namespace std;
int n,k;
char x[20];
vector<string> tien;
void sinh(){
	int i=n;
	while(i>=0&&x[i]!='A'){
		x[i]='A';
		i--;
	}
	x[i]='B';
}
bool check(){
	for(int i=1;i<=n;i++){
		if(x[i]=='A') return true;
	}
	return false;
}
void kiemtra(){
	int total=0;
	bool OK;
	for(int i=1;i<=n-k+1;i++){
		if(x[i]=='A'){
			OK=true;
			for(int j=i;j<=n-k+i;j++){
				if(x[j]=='B'){
					OK=false;
					break;
				}
			}
			if(OK) total++;
		}
	}
	if(total==1){
		string c="";
		for(int i=1;i<=n;i++){
			c+=x[i];
		}
		tien.push_back(c);
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		x[i]='A';
	}
	kiemtra();
	while(check()){
		sinh();
		kiemtra();
	}
	kiemtra();
	cout<<tien.size()<<endl;
	for(int i=0;i<tien.size();i++){
		cout<<tien[i]<<endl;
	}
	return 0;
}
