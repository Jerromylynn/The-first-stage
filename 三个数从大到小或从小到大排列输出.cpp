#include<stdio.h>
int main(){
	int a,b,c,max ,min;
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(b>a)
	max=b;
	else if(c>a)
	max=c;
	if((a+b+c-max)>2*b)
	min=b;
	else
	min=c;
	printf("�Ӵ�С��%d %d %d\n",max,a+b+c-max-min,min);
	printf("��С����%d %d %d\n",min,a+b+c-max-min,max);
	return 0;	
}
