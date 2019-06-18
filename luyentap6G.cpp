#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct tien{
	string cha,con;
	int tuoicha;
	int tuoicon;
};
tien tien_1[105];
int test,quantity;
void calculate_age(string s,int k){
	for(int i=1;i<=quantity;i++){
		if(tien_1[i].cha==s){
			tien_1[i].tuoicon=k-tien_1[i].tuoicha;
			calculate_age(tien_1[i].con,tien_1[i].tuoicon);
		}
	}
}
void show(int place){
	cout<<"DATASET "<<place<<endl;
	for(int i=1;i<=quantity;i++){
		cout<<tien_1[i].con<<" "<<tien_1[i].tuoicon<<endl;
	}
}
bool comp(tien a,tien b){
	if(a.tuoicon<b.tuoicon) return false;
	else if(a.tuoicon==b.tuoicon&&a.con>b.con) return false;
	return true;
}
int main(){
	cin>>test;
	for(int k=1;k<=test;k++){
		cin>>quantity;
		for(int i=1;i<=quantity;i++){
			cin>>tien_1[i].cha>>tien_1[i].con;
			cin>>tien_1[i].tuoicha;
		}
		calculate_age("Ted",100);
		sort(tien_1+1,tien_1+quantity+1,comp);
		show(k);
	}
	return 0;
}
