#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int n,x[1005][1005];
char s[10000];
void tach(char c[],int k){
	char *p;
	p=strtok(c," ");
	while(p!=NULL){
		x[k][atoi(p)-1]=1;
		p=strtok(NULL," ");
	}
}
int main(){
	scanf("%d",&n);
	int k=n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			x[i][j]=0;
		}
	}
	gets(s);
	int t=0;
	while(k--){
		gets(s);
		tach(s,t);
		t++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	return 0;
}
