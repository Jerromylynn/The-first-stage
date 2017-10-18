#include <stdio.h>
int main()
{
	int m,n;
	int y;
	int max,min;
	int i,T;
	
	
	printf("ÊäÈë   Êä³ö\n");
	printf("\n");scanf("%d",&T);
	for(i=1;i<=T;i++){
	
	printf("");scanf("%d  %d",&m,&n);
	
	do{
	
	if(m>=n)
	{
	max=m;
	min=n;}
	
	else {
	 max=n;
	      min=m;}
	
	y=max%min;
	n=y;
	m=min;
	}while(n!=0);
	printf("%d\n",m);
}
	return 0;
}
