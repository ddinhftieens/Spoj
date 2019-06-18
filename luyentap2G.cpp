#include<iostream>
#include<string>
#define max 20
using namespace std;
int n,x[max],a[max],value=300,dem;
string s[max];
void tien_1(string u,string v)
{
	int a[255],b[255];
	for(int i=0;i<255;i++){
		a[i]=0;
		b[i]=0;
	}
	for(int i=0;i<u.length();i++){
		a[u[i]]++;
	}
	for(int i=0;i<v.length();i++){
		b[v[i]]++;
	}
	for(int i=0;i<255;i++){
		if(a[i]!=0&&b[i]!=0){
			dem++;
		}
	}
}
void xuat()
{
	dem=0;
	for(int i=0;i<n-1;i++){
		tien_1(s[x[i]],s[x[i+1]]);
	}
	if(value>dem) value=dem;
}
void tien(int i)
{
	for(int j=0;j<n;j++){
		if(a[j]){
			x[i]=j;a[j]=0;
			if(i==n-1) xuat();
			else tien(i+1);
			a[j]=1;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++){
		a[i]=1;
	}
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	tien(0);
	cout<<value;
	return 0;
}
