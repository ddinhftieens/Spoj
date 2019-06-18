#include<iostream>
#define max 1000000007
using namespace std;
int n;
long long k;
struct Matran
{
	long long c[10][10];
};
Matran luythua(Matran a,Matran b)
{
	Matran x;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			x.c[i][j]=0;
			for(int e=0;e<n;e++){
				x.c[i][j]=(x.c[i][j]+a.c[i][e]*b.c[e][j])%max;
			}
		}
	}
	return x;
}
Matran tien(Matran x,long long l)
{
	if(l==1) return x;
	Matran y=tien(x,l/2);
	y=luythua(y,y);
	if(l%2==1) y=luythua(y,x);
	return y;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		Matran A;
		cin>>n>>k;
		long long c[n][n];
		for(int j=0;j<n;j++){
			for(int z=0;z<n;z++){
				cin>>A.c[j][z];
			}
		}
		A=tien(A,k);
		for(int j=0;j<n;j++){
			for(int z=0;z<n;z++){
				cout<<A.c[j][z]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
