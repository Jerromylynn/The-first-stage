#include <stdio.h>
void qw(int a,int b,int c) 
{
	int i,k;
	printf("%d.",a/b);
	k=a%b;
	for(i=1;i<=c;i++){
		printf("%d",k*10/b);
		k=(k*10)%b;
	}

}
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	qw(a,b,c);
	return 0;
}
