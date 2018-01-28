#include<stdio.h>
#include<string.h>
int jisuan(int *a,int n,int i)
{
	if(n>0)
	{
		jisuan(a,n/2,i-1); 
	}
	else return 0;
	a[i]=n%2;
}
int main ()
{
	int a[10000];
	memset(a,0,sizeof(a));
	int n;
	scanf("%d",&n);
	int m;
	for(int i=0;i<n/8;i++)
	{
		scanf("%d",&m);
		jisuan(a,m,(i+1)*8-1);
	}
	int flag=a[0],cnt=0;
	for(int i=0;i<n;i++)
	{
		if(a[i] != flag)
		{
			printf("%d ",flag==1? cnt+128 : cnt);
			flag=a[i];
			cnt=0;
		}
		cnt++;
	}
	printf("%d",flag==1? cnt+128 : cnt);
 } 

