#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct tien{
	int heso;
	int somu;
	struct tien *pNext;
};
typedef struct tien TIEN;
struct list{
	TIEN *dau;
	TIEN *cuoi;
};
typedef struct list LIST;
void khoitao(LIST &l){
	l.dau=l.cuoi=NULL;
}
TIEN *tra_ve(int x,int y){
	TIEN *p=new TIEN;
	if(p==NULL) return NULL;
	p->heso=x;
	p->somu=y;
	p->pNext=NULL;
	return p;
}
void them(LIST &l,TIEN *p){
	if(l.dau==NULL){
		l.cuoi=l.dau=p;
	}else{
		l.cuoi->pNext=p;
		l.cuoi=p;
	}
}
int chuyendoi(string s){
	int t=0,n=s.length();
	for(int i=0;i<s.length();i++){
		t+=(s[i]-'0')*pow(10,n-i-1);
	}
	return t;
}
void tach(string s,LIST &l){
	khoitao(l);
	string c="";
	int i=0;
	while(i<s.length()){//for(int i=0;i<s.length();i++)
		if(s[i]!=' '){
			c+=s[i];
		}else{
			string a="";
			for(int j=0;j<c.length();j++){
				if(c[j]!='*'){
					a+=c[j];
				}
				else break;
			}
			string b="";
			for(int j=c.length()-1;j>=0;j--){
				if(c[j]!='^'){
					b+=c[j];
				}
				else break;
			}
			TIEN *p=tra_ve(chuyendoi(a),chuyendoi(b));
			them(l,p);
			c="";
			i=i+2;	
		}
		if(i==s.length()-1){
			string a="";
			for(int j=0;j<c.length();j++){
				if(c[j]!='*'){
					a+=c[j];
				}
				else break;
			}
			string b="";
			for(int j=c.length()-1;j>=0;j--){
				if(c[j]!='^'){
					b+=c[j];
				}
				else break;
			}
			TIEN *p=tra_ve(chuyendoi(a),chuyendoi(b));
			them(l,p);
		}
		i++;
	}
}
void out(LIST l){
	for(TIEN *p=l.dau;p!=NULL;p=p->pNext){
		if(p==l.cuoi) cout<<p->heso<<"*x^"<<p->somu;
		else cout<<p->heso<<"*x^"<<p->somu<<" + ";
	}
	cout<<endl;
}
void cong(LIST &a,LIST &b){
	LIST c;
	TIEN *p,*q,*r;
	p=a.dau;
	q=b.dau;
	khoitao(c);
	while(1){
		if(p->somu > q->somu){
			r=tra_ve(p->heso,p->somu);
			them(c,r);
			p=p->pNext;
		}
		else if(p->somu < q->somu){
			r=tra_ve(q->heso,q->somu);
			them(c,r);
			q=q->pNext;
		}
		else{
			r=tra_ve(q->heso+p->heso,p->somu);
		them(c,r);
			p=p->pNext;
			q=q->pNext;
		}
		if(p==NULL||q==NULL) break;
	}
	while(p!=NULL){
		r=tra_ve(p->heso,p->somu);
		them(c,r);
		p=p->pNext;
	}
	while(q!=NULL){
		r=tra_ve(q->heso,q->somu);
		them(c,r);
		q=q->pNext;
	}
	out(c);
}
int main(){
	int v;
	cin>>v;
	while(v>0){
		string s1,s2;
		fflush(stdin);
		getline(cin,s1);
		getline(cin,s2);
		LIST l,k;
		tach(s1,l);
		tach(s2,k);
		cong(l,k);
		v--;
	}
	return 0;
}
