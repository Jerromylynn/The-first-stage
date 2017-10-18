#include <stdio.h>
int main(){
	double x,z;
	int y;
	printf("请输入一个数："); scanf("%lf\n",x); 
	y=x;
	z=x-y;
	printf("整数部分为：%d\n",y);
	printf("小数部分为：%d\n",z);

    return 0;	
}
