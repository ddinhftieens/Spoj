#include<iostream>
#include<algorithm>
using namespace std;
int n;
//void hopmang(long x[],int dau, int giua, int cuoi){
//	int i=dau;
//	int j=giua+1;
//	long z[105];
//	for(int k=0;k<=cuoi-dau;k++){
//		if(x[i]>x[j]){
//			z[k]=x[j];
//			j++;
//		}
//		else{
//			z[k]=x[i];
//			i++;
//		}
//		if(i==giua+1){
//			while(j<=cuoi){
//				k++;
//				z[k]=x[j];
//				j++;
//			}
//			break;
//		}
//		if(j==cuoi+1){
//			while(i<=giua){
//				k++;
//				z[k]=x[i];
//				i++;
//			}
//			break;
//		}
//	}
//	for(int k=0;k<=cuoi-dau;k++){
//		x[dau+k]=z[k];
//	}
//}
//void tien(long x[], int dau, int cuoi){
//	if(dau<cuoi){
//		int giua=(dau+cuoi)/2;
//		tien(x,dau,giua);
//		tien(x,giua+1,cuoi);
//		hopmang(x,dau,giua,cuoi);
//	}
//}
int main(){
	long x[105],y[105];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	for(int i=0;i<n;i++){
		cin>>y[i];
	}
//	tien(x,0,n-1);
//	tien(y,0,n-1);
	sort(x,x+n);
	sort(y,y+n);
	for(int i=n-1;i>=0;i--){
		if(x[i]>y[i]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
