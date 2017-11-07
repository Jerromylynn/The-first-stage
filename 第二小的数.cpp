#include <stdio.h>
void bsort( int a[],int m)
{
	int i,j;
	for(i=0;i<m-1;i++){
		for(j=m-1;j>i;j--){
			if(a[j-1]>a[j]){
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
int main(){
	int n,m,w,x,doc;
	int a[100];

	scanf("%d",&n);//总组数 n 

	for(int i=0;i<n;i++){
		scanf("%d",&m);//每组数个数 m
		
		scanf("%d",&x); 
		if(x<2)
		printf("ERROR\n");//个数小于二不成立 
	
		else{ //不小于二时 
	    for(int k=0;k<m;k++) 
		scanf("%d",&a[k]); //保存每一个数
		
		bsort(a,m);//从小到大排列 
	
		if(a[0]==a[m-1])
		printf("ERROR");
	    else
		for(int p=0;p<m-1;p++){//输出第二小 
			if(a[p]<a[p+1]){
			printf("%d",a[p+1]);
		    break;}	
			}
			
		}
    	} 
		return 0;
	} 
