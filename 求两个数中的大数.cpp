#include <stdio.h>
int main(){
	double x,y;
	printf("请输入两个不同的数：\n"); scanf("%lf %lf",&x,&y);
	if(x>y) 
	printf("较大的数为：%f\n",x);
	else
	printf("较大的数为：%f\n",y);
	return 0; 
} 
