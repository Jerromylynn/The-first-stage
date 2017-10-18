#include<stdio.h>
int main(void)
{
	double x;
	
    printf("原价:");
    scanf("%lf",&x);
    
    if(x<=60)
       printf("实际消费：%.1f",x);
    if(60<x<=200)
       printf("实际消费：%.1f",x*0.9);
	if(x>200) 
	   printf("实际消费：%.1f",180+(x-200)*0.8);
	
	return 0;
	
} 
