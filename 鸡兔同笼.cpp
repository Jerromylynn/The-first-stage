#include <stdio.h>
int main()
{
	int n,y,x;
	scanf("%d",&n);
	y=n%2;
	x=n%4;
	printf("%d  %d",x/2+n/4,n/2+y/4);
	return 0;
 } 
