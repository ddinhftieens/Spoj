#include<iostream>
#include<cmath>
#define max 1000000
using namespace std;
long long x[max][2];
long long a[max];
long int k;
double value;
void xuat()
{
	long long z=(x[a[1]][1]-x[a[2]][1]);
	long long y=(x[a[1]][2]-x[a[2]][2]);
	double c=sqrt(z*z+y*y);
	if(c<value){
		value=c;
	}
}
void tien(long int i)
{
	for(long int j=a[i-1]+1;j<=k-2+i;j++){
		a[i]=j;
		if(i==2) xuat();
		else tien(i+1);
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>k;
		for(long int j=1;j<=k;j++){
			for(int l=1;l<=2;l++){
				cin>>x[j][l];
			}
		}
		long long z=(x[1][1]-x[2][1]);
		long long y=(x[1][2]-x[2][2]);
		value=sqrt(z*z+y*y);
		a[0]=0;
		tien(1);
		cout.precision(6);
		cout.setf(ios::fixed);
		cout<<value<<endl;
	}
	return 0;
}
