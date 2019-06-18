#include<iostream>
//#include<sstream>
//#include<string>
#include<string.h>
#include<stdlib.h>
using namespace std;
int n,x[1005][1005];
char s[10000];
void tach(char c[],int k){
	char *p;
	p=strtok(c," ");
	while(p!=NULL){
		x[k][atoi(p)-1]=1;
		p=strtok(NULL," ");
	}
//	int value=0;
//	for(int i=0;i<c.length();i++){
//		if(c[i]==' '){
//			value++;
//		}
//	}
//	istringstream tien;
//	tien.str(c);
//	int i;
//	for(int t=0;t<=value;t++){
//		tien>>i;
//		x[k][i-1]=1;
//	}
}
int main(){
	cin>>n;
	int k=n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			x[i][j]=0;
		}
	}
	fflush(stdin);
	int t=0;
	while(k--){
		gets(s);
		tach(s,t);
		t++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
