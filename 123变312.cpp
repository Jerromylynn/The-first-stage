#include<stdio.h>
int main()
{
	int n;
	int a,b,c;
	printf("������һ����λ����\n");
	scanf("%d",&n);
	a=n/100;//ȡ��λ 
	b=n/10%10;//ȡʮλ 
	c=n%10;//ȡ��λ 
	printf("%d%d%d",c,a,b);
	return 0;
	/*int i,a[3],m,n;        //������ 
	printf("������һ����λ����\n");
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
 
