#include<stdio.h>
int main(void)
{
	double x;
	
    printf("ԭ��:");
    scanf("%lf",&x);
    
    if(x<=60)
       printf("ʵ�����ѣ�%.1f",x);
    if(60<x<=200)
       printf("ʵ�����ѣ�%.1f",x*0.9);
	if(x>200) 
	   printf("ʵ�����ѣ�%.1f",180+(x-200)*0.8);
	
	return 0;
	
} 
