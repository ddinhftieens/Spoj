#include<bits/stdc++.h>
using namespace std;
struct time_1{
	long start,end;
};
struct time_1 work[100005];
int test,n;
bool comp(time_1 a,time_1 b){
	return a.end<b.end;
}
int main(){
	cin>>test;
	while(test--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>work[i].start>>work[i].end;
		}
		sort(work+1,work+n+1,comp);
		int k=work[1].end,total=1;
		for(int i=2;i<=n;i++){
			if(k<=work[i].start){
				k=work[i].end;
				total++;
			}
		}
		cout<<total<<endl;
	}
	return 0;
}
