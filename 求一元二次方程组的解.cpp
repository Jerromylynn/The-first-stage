  #include <stdio.h>
  int main(){
  	double a,b,c,d,m,n,x,y;
  	printf("输入x及y前的系数以及m,n的值：\n");
  	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m,&n);
  	x=(m*d-b*n)/(a*d-b*c);
  	y=(m*c-a*n)/(b*c-a*d);
  	printf("x的值为：%lf,y的值为：%lf",x,y);
  	return 0;
  } 
