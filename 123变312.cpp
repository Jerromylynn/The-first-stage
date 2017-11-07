#include<stdio.h>
int main()
{
	int n;
	int a,b,c;
	printf("请输入一个三位数：\n");
	scanf("%d",&n);
	a=n/100;//取百位 
	b=n/10%10;//取十位 
	c=n%10;//取个位 
	printf("%d%d%d",c,a,b);
	return 0;
	/*int i,a[3],m,n;        //用数组 
	printf("请输入一个三位数：\n");
	for(i=0;i<3;i++)
	  scanf("%d",&a[i]);
	m=a[1];
	n=a[2];
	a[1]=a[0];
	a[0]=n;
	a[2]=m; 
	for(i=0;i<3;i++)
	   printf("%d",a[i]);
	return 0;*/ 
 } 
 
