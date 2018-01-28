#include <stdio.h>
int Max(int a[],int n){
	int max1,max2;
	if(n==1)
	return a[0];
	else{
		max1=Max(a ,n-1);
		if(max1>a[n-1])
		max2=max1;
		else max2=a[n-1];
		return max2; 
	}
}
int main(){
	int a[20];
	int n;
	printf("数字个数n= ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("最大数为: %d\n",Max(a,n));
	return 0;
}
