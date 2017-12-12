#include<stdio.h>
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int a[m][n];
	int k=2,i=0,j=1;
	a[0][0]=1;
	a[0][1]=2;
	while(k<=m*n){
        while(i<(m-1)&&j>0){
         	a[++i][--j]=++k;
		 }
   	    if(i<(m-1)) a[++i][j]=++k;
		else a[i][++j]=++k;
		while(i>0&&j<(n-1)){
		 	a[--i][++j]=++k;
		 }
		 if(j<(n-1)) a[i][++j]=++k;
         else a[++i][j]=++k;
	}
    for(int p=0;p<m;p++){
   	for(int q=0;q<n;q++)
   	printf("%d ",a[p][q]);
   	printf("\n");
	}
	return 0;
}
