#include<iostream>
#define max 1000000007
using namespace std;
struct Matran
{
	long long c[2][2];
	Matran(){
		c[0][0]=0;
		c[0][1]=1;
		c[1][0]=1;
		c[1][1]=1;
	}
};
Matran luythua(Matran a,Matran b)
{
	Matran x;
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			x.c[i][j]=0;
			for(int k=0;k<=1;k++){
				x.c[i][j]=(x.c[i][j]+a.c[i][k]*b.c[k][j])%max;
			}
		}
	}
	return x;
}
Matran tien(Matran x,long long n)
{
	if(n==1) return x;
	Matran y=tien(x,n/2);
	Matran kp=luythua(y,y);
	if(n%2==1) kp=luythua(kp,x);
	return kp;
}
int main()
{
	int n;
	long long k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		Matran A;
		A=tien(A,k);
		cout<<A.c[1][0]<<endl;
	}
	return 0;
}
