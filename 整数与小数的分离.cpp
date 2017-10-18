  #include <stdio.h>
  int main(){
  	double x,z;
  	int y;
  	printf("输入一个数x：\n"); scanf("%lf",&x) ;
  	y=x;
  	z=x-y;
  	printf("x的整数部分为：%d\n",y);
  	printf("x的小数部分为：%lf\n",z);
  	return 0;
  } 
