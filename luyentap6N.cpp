#include<iostream>
#include<string>
#include<queue>
using namespace std;
int test,x[15][15],value;
struct tien{
	int hoanhdo,tungdo;
};
queue<tien> tien_1;
tien a;
int check(int start, int start_1, int end,int end_1){
	int k=1;
	a.hoanhdo=start;
	a.tungdo=start_1;
	if(a.hoanhdo==end&&a.tungdo==end_1) return value;
	tien_1.push(a);
	while(!tien_1.empty()){
		k--;
		int i=tien_1.front().hoanhdo;
		int j=tien_1.front().tungdo;
		tien_1.pop();
		if(x[i][j]==0){
			x[i][j]=1;
			if(i-2>0&&j-1>0){
				a.hoanhdo=i-2;a.tungdo=j-1;tien_1.push(a);
				if(a.hoanhdo==end&&a.tungdo==end_1) return ++value;
			}
			if(i-2>0&&j+1<9){
				a.hoanhdo=i-2;a.tungdo=j+1;tien_1.push(a);
				if(a.hoanhdo==end&&a.tungdo==end_1) return ++value;
			} 
			if(j-1>0&&i+2<9){
				a.hoanhdo=i+2;a.tungdo=j-1;tien_1.push(a);
				if(a.hoanhdo==end&&a.tungdo==end_1) return ++value;
			}
			if(i+2<9&&j+1<9){
				a.hoanhdo=i+2;a.tungdo=j+1;tien_1.push(a);
				if(a.hoanhdo==end&&a.tungdo==end_1) return ++value;
			}
			if(i-1>0&&j-2>0){
				a.hoanhdo=i-1;a.tungdo=j-2;tien_1.push(a);
				if(a.hoanhdo==end&&a.tungdo==end_1) return ++value;
			}
			if(i-1>0&&j+2<9){
				a.hoanhdo=i-1;a.tungdo=j+2;tien_1.push(a);
				if(a.hoanhdo==end&&a.tungdo==end_1) return ++value;
			}
			if(j-2>0&&i+1<9){
				a.hoanhdo=i+1;a.tungdo=j-2;tien_1.push(a);
				if(a.hoanhdo==end&&a.tungdo==end_1) return ++value;
			}
			if(i+1<9&&j+2<9){
				a.hoanhdo=i+1;a.tungdo=j+2;tien_1.push(a);
				if(a.hoanhdo==end&&a.tungdo==end_1) return ++value;
			}
		}
		if(k==0){
			value++;
			k=tien_1.size();
		}
	}
}
void Init(){
	cin>>test;
	while(test--){
		value=0;
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				x[i][j]=0;
			}
		}
		string s1,s2;
		cin>>s1>>s2;
		int i=((int ) s1[0])-96;
		int j=((int ) s2[0])-96;
		cout<<check(i,s1[1]-'0',j,s2[1]-'0')<<endl;
		while(!tien_1.empty()){
			tien_1.pop();
		}
	}
}
int main(){
	Init();
	return 0;
}
