#include<iostream>
using namespace std;
int n;
long long x[100005],y[100005];
void hopnhat(int dau,int giua,int cuoi){
	int i=dau;
	int j=giua+1;
	for(int k=0;k<=cuoi-dau;k++){
		if(x[i]>x[j]){
			y[k]=x[j];
			j++;
		}
		else{
			y[k]=x[i];
			i++;
		}
		if(i==giua+1){
			while(j<=cuoi){
				k++;
				y[k]=x[j];
				j++;
			}
			break;
		}
		if(j==cuoi+1){
			while(i<=giua){
				k++;
				y[k]=x[i];
				i++;
			}
			break;
		}
	}
	for(int k=0;k<=cuoi-dau;k++){
		x[dau+k]=y[k];
	}
}
void tien(int dau,int cuoi){
	if(dau<cuoi){
		int giua=(dau+cuoi)/2;
		tien(dau,giua);
		tien(giua+1,cuoi);
		hopnhat(dau,giua,cuoi);
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	tien(0,n-1);
	for(int i=0;i<n;i++){
		cout<<x[i]<<" ";
	}
	return 0;
}
