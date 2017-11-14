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
	printf("从大到小：%d %d %d\n",max,a+b+c-max-min,min);
	printf("从小到大：%d %d %d\n",min,a+b+c-max-min,max);
	return 0;	
}
