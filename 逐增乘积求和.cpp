#include<stdio.h>
int main(void)
{
	int i,a,b,c;
	printf("所有的三位数中能被个位数和百位数之和整除的数有：\n"); 
    for(i=100;i<=999;i++){
	c=i%10;
    b=i%100/10;
    a=i/100;
      if(b%(a+c)==0&&b!=0)
      printf("%d  ",i);
       }
  
   return 0;
}

