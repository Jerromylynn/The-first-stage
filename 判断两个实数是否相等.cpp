#include <stdio.h>
int main(){
	double x,y,k;
	printf("����������ʵ����\n");scanf("%lf%lf",&x,&y);
	if(x>y)
	k=x-y;
	else
	k=y-x;
	if(k<=1e-6)
	puts("����ʵ����ȡ�\n");
	else
	puts ("����ʵ������ȡ�\n");
	return 0;
} 
