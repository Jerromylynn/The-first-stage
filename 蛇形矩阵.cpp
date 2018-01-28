#include<stdio.h>
int main(){
	int n,x=0,y=0;
	scanf("%d",&n);
	int a[23][23];
	int k=1,m=2;
	for(int i=0;i<n;i++){
		m=i+2;
		int t=k;
		for(int j=0;j<n-i;j++){
			a[i][j]=t;
			t+=m;
			m++;
		}
		k=k+i+1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++)
			printf("%d ",a[i][j]);
				putchar('\n');
		}
	return 0;
}
