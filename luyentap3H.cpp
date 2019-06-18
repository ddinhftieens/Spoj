#include<iostream>
#include<string>
using namespace std;
int x[10000];
int top;
void khoitao(){
	top=-1;
}
void xoa(){
	if(top>=0) top--;
}
void them(int k){
	top++;
	x[top]=k;
}
void xuat(){
	if(top<0){
		cout<<"empty"<<endl;
	}
	else{
		for(int i=0;i<=top;i++){
			cout<<x[i]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	string s,a;
	khoitao();
//	while(!s.empty()){
//		if(s=="push"){
//			int k;
//			cin>>k;
//			push(k);
//		}
//		else if(s=="pop"){
//			pop();
//		}
//		else if(s=="show"){
//			show();
//		}
//		cin>>a;
//		s=a;
//	}
	do{
		cin>>s;
		if(s=="push"){
			int k;
			cin>>k;
			them(k);
		}
		if(s=="pop"){
			xoa();
		}
		if(s=="show"){
			xuat();
		}
	}while(!s.empty());
	return 0;
}
