#include<stdio.h>
int main(){
	double x;
	int y;
	printf("请输入一个数：");scanf("%lf",&x) ;
	y=x;
	if (x-y>=0.5)
	y+=1;
	printf("四舍五入后的结果为：%d\n",y);
	return 0;
	
} 
