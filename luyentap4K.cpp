#include<iostream>
using namespace std;
int a[100];
void xuat(){
	bool OK=true;
	for(int i=9;i>=0;i--){
		for(int j=0;j<a[i];j++){
			OK=false;
			cout<<i;
		}
	}
	if(OK) cout<<-1;
	cout<<endl;
}
void t(){
	if(a[2]>=2){
		a[2]-=2;
		xuat();
	}
	else if(a[2]==1&&a[5]!=0){
		a[2]--;
		a[5]--;
		xuat();
	}
	else if(a[5]>=2){
		a[5]-=2;
		xuat();
	}
	else if(a[2]==1&&a[8]!=0){
		a[2]--;
		a[8]--;
		xuat();
	}
	else if(a[5]==1&&a[8]!=0){
		a[5]--;
		a[8]--;
		xuat();
	}
	else if(a[8]>=2){
		a[8]-=2;
		xuat();
	}
	else cout<<-1<<endl;
}
void t_1(){
	if(a[1]>=2){
		a[1]-=2;
		xuat();
	}
	else if(a[1]==1&&a[4]!=0){
		a[1]--;
		a[4]--;
		xuat();
	}
	else if(a[4]>=2){
		a[4]-=2;
		xuat();
	}
	else if(a[1]==1&&a[7]!=0){
		a[1]--;
		a[7]--;
		xuat();
	}
	else if(a[4]==1&&a[7]!=0){
		a[4]--;
		a[7]--;
		xuat();
	}
	else if(a[7]>=2){
		a[7]-=2;
		xuat();
	}
	else cout<<-1<<endl;
}
int main(){
	int n;
	cin>>n;
	while(n>0){
		int k;
		cin>>k;
		for(int i=0;i<=9;i++){
			a[i]=0;
		}
		int x[k];
		long tien=0;
		for(int i=0;i<k;i++){
			cin>>x[i];
			a[x[i]]++;
			tien+=x[i];
		}
		int tien_2=tien%3;
		if(tien_2==0){
			xuat();
		}
		else{
			if(tien_2==1){
				if(a[1]!=0){
					a[1]--;
					xuat();
				}
				else if(a[4]!=0){
					a[4]--;
					xuat();
				}
				else if(a[7]!=0){
					a[7]--;
					xuat();
				}
				else t();
			}
			else{
				if(a[2]!=0){
					a[2]--;
					xuat();
				}
				else if(a[5]!=0){
					a[5]--;
					xuat();
				}
				else if(a[8]!=0){
					a[8]--;
					xuat();
				}
				else t_1();
			}
		}
		n--;
	}
	return 0;
}
