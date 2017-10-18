N#include <stdio.h>
int main(){
	double x,z;
	int y,m;
	printf("请输入一个数："); scanf("%lf\n",x); 
	y=x;
	z=x-y;
	if (z>=0.5)
	    m=y+1;
	else
	    m=y;
	printf("四舍五入后的值为：%d\n",m);
	
    return 0;	
}
