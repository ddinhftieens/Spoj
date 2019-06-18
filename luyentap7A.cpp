#include<iostream>
#include<vector>
using namespace std;
int test, n, m, check[100005];
vector<int> tien[100005];
void Init(){
	cin>>test;
	while(test--){
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			tien[x].push_back(y);
			tien[y].push_back(x);
		}
		for(int i=1;i<=n;i++){
			check[i]=1;
		}
		int total=0;
		for(int i=1;i<=n;i++){
			if(check[i]){
				check[i]=0;
				int k=1;
				for(int j=0;j<tien[i].size();j++){
					if(check[tien[i][j]]){
						k++;
						check[tien[i][j]]=0;
						for(int z=0;z<tien[tien[i][j]].size();z++){
							tien[i].push_back(tien[tien[i][j]][z]);
						}
					}
				}
				if(k>total) total=k;
			}
		}
		for(int i=1;i<=n;i++){
			tien[i].clear();
		}
		cout<<total<<endl;
	}
}
int main(){
	Init();
	return 0;
}
