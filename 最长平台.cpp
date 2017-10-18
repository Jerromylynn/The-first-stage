#include <stdio.h>
int main(void)
{
	int num;
	int i,m;
	int max;
	int a[num];
	int b[num]={0};
	printf("%d");scanf("%d",&num);
	for(i=0;i<=num;i++){
		
	    printf("%d  ");scanf("%d",&a[i]);
	     for(m=0;m<=i;m++){
		      if(a[i]==a[m]){
			 b[m]++;
	         break;
	         }
	     }
	}
	max=b[0];
	for(i=1;i<=num;i++){
	   if(b[i]>max)
	    max=b[i];}
	printf("%d\n1",max);
	return 0;
} 
