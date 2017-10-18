#include <stdio.h>
int main(void)
{
    int w;
    int i;
    int month[12]={13,44,72,103,133,164,194,225,255,286,316,347};
    int x;
	printf("一月一日星期:");
    scanf("%d",&w);
    for(i=0;i<12;i++){
	
	   if(w==1||w==2) 
	   x=month[i]%7-1+w;
	   else x=w+4-month[i]%7;
	    
	  if(x==5)
	  printf("%d\n",i+1);
}
    
 return 0;	
}
