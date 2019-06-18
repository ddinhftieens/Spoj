#include<iostream>
#include<deque>
using namespace std;
int test,top,edge,x[1005][1005],check_1[1005];
deque<int> tien_1,tien_2;
bool check(deque<int> tien){
	int l=tien.back();
	tien.pop_back();
	while(!tien.empty()){
		if(x[l][tien.front()]==1) return false;
		tien.pop_front();
	}
	return true;
} 
int BFS(int k){
	while(k<=top){
		if(check_1[k]){
			tien_1.push_back(k);
			check_1[k]=0;
			if(!check(tien_1)){
				tien_1.pop_back();
				tien_2.push_back(k);
				if(!check(tien_2)) return 0;
			}
		}
		k++;
	}
	return 1;	
}
void Init(){
	cin>>test;
	while(test--){
		cin>>top>>edge;
		for(int i=1;i<=top;i++){
			check_1[i]=1;
			for(int j=1;j<=top;j++){
				x[i][j]=0;
			}
		}
		int a,b;
		while(edge--){
			cin>>a>>b;
			x[a][b]=1;
			x[b][a]=1;
		}
		if(BFS(1)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		while(!tien_1.empty()){
			tien_1.pop_front();
		}
		while(!tien_2.empty()){
			tien_2.pop_front();
		}
	}
}
int main(){
	Init();
	return 0;
}
