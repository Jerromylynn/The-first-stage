#include<stdio.h>
int main(void)
{
	int i,a,b,c;
	printf("���е���λ�����ܱ���λ���Ͱ�λ��֮�����������У�\n"); 
    for(i=100;i<=999;i++){
	c=i%10;
    b=i%100/10;
    a=i/100;
      if(b%(a+c)==0&&b!=0)
      printf("%d  ",i);
       }
  
   return 0;
}

