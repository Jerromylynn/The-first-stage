#include <stdio.h>
int main(){
	int a,b,m,n;
	int A[20][20],B[20][20];
	scanf("%d%d%d%d",&a,&b,&m,&n);
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++)
			scanf("%d",&A[i][j]) ;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			scanf("%d",&B[i][j]) ;
	}
	if(b!=m){
		printf("error");
		return 0;
	}
	int C[20][20]={0};
	for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				for(int k=0;k<b;k++){
				C[i][j]+=A[i][k]*B[k][j];
				} 
			}
		}
	for(int f=0;f<a;f++){
		for(int x=0;x<n;x++){
			printf("%d ",C[f][x]);
		}
		printf("\n");
	}
	return 0;
	
} 
