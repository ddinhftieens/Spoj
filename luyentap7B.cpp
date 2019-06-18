#include<iostream>
#include<vector>
using namespace std;
long int test, n, m, check[100005];
vector<long int> tien[100005];
void Init(){
	cin>>test;
	while(test--){
		cin>>n>>m;
		vector<long int> tien_1;
		bool OK=true;
		for(long int i=1;i<=m;i++){
			long int x,y;
			cin>>x>>y;
			for(long int j=0;j<tien[x].size();j++){
				if(tien[x][j]==y){
					OK=false;
					break;
				}
			}
			if(OK) tien[x].push_back(y);
			OK=true;
			for(long int j=0;j<tien[y].size();j++){
				if(tien[y][j]==x){
					OK=false;
					break;
				}
			}
			if(OK) tien[y].push_back(x);
		}
		OK=true;
		for(long int i=1;i<=n;i++){
			check[i]=1;
		}
		for(long int i=1;i<=n;i++){
			if(check[i]&&!tien[i].empty()){
				check[i]=0;
				long int k=tien[i].size();
				for(long int j=0;j<tien[i].size();j++){
					if(check[tien[i][j]]){
						check[tien[i][j]]=0;
						tien_1.push_back(tien[i][j]);// cac thanh phan lien thong voi dinh i
						for(long int z=0;z<tien[tien[i][j]].size();z++){
							if(check[tien[tien[i][j]][z]]) tien[i].push_back(tien[tien[i][j]][z]);
						}
					}
				}
				for(long int j=0;j<tien_1.size();j++){
					if(tien[tien_1[j]].size()!=k){
						cout<<"NO"<<endl;
						OK=false;
						break;
					}
				}
				if(!OK) break;
			}
		}
		for(long int i=1;i<=n;i++){
			tien[i].clear();
		}
		if(OK) cout<<"YES"<<endl;
	}
}
int main(){
	Init();
	return 0;
}
