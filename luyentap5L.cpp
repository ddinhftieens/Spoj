#include<iostream>
using namespace std;
int n;
long x[105][2],y[105][2];
void hop(int dau,int giua,int cuoi){
	int i=dau,j=giua+1;
	for(int k=0;k<=cuoi-dau;k++){
		if(x[i][0]>x[j][0]){
			y[k][0]=x[j][0];
			y[k][1]=x[j][1];
			j++;
		}
		else{
			y[k][0]=x[i][0];
			y[k][1]=x[i][1];
			i++;
		}
		if(i==giua+1){
			while(j<=cuoi){
				k++;
				y[k][0]=x[j][0];
				y[k][1]=x[j][1];
				j++;
			}
			break;
		}
		if(j==cuoi+1){
			while(i<=giua){
				k++;
				y[k][0]=x[i][0];
				y[k][1]=x[i][1];
				i++;
			}
			break;
		}
	}
	for(int k=0;k<=cuoi-dau;k++){
		x[dau+k][0]=y[k][0];
		x[dau+k][1]=y[k][1];
	}
}
void tien_1(int dau,int cuoi){
	if(dau<cuoi){
		int giua=(dau+cuoi)/2;
		tien_1(dau,giua);
		tien_1(giua+1,cuoi);
		hop(dau,giua,cuoi);
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>x[i][j];
		}
	}
	tien_1(0,n-1);
	long value=x[0][0]+x[0][1],doi=0;
	for(int i=1;i<n;i++){
		if(value+doi<=x[i][0]){
			doi=x[i][0]-value;
		}
		else doi=0;
		value=value+doi+x[i][1];
		doi=0;
	}
	cout<<value;
	return 0;
}
