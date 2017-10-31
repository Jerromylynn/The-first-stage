#include <stdio.h>
int main(){
	double x,y,k;
	printf("请输入两个实数：\n");scanf("%lf%lf",&x,&y);
	if(x>y)
	k=x-y;
	else
	k=y-x;
	if(k<=1e-6)
	puts("两个实数相等。\n");
	else
	puts ("两个实数不相等。\n");
	return 0;
} 
