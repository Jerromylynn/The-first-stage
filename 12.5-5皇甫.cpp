#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
	char a[8][10]={
	{"         "},
	{"--**-**--"},
	{"-*-*****-"},
	{"-*----**-"},
	{"--*--**--"},
	{"---***---"},
	{"----*---"},
	{         }};
	int n;
	scanf("%d",&n);
	if(n<1||n>7)
	{
		printf("Input Error\n");
		return 0;
	}
	int b[9];
	memset(b,0,sizeof(b));
	int cnt=0;
	for(int i=1;i<7;i++)
	{
		for(int k=1;k<8;k++)
		{
			if(a[i][k]=='*')
			{
				cnt=0;
				for(int p=i-1;p<=i+1;p++)
				{
					for(int q=k-1;q<=k+1;q++)
					{
						if(a[p][q]=='-')
						cnt++;
					}
				}
				b[cnt]++;
			}
		}
	}
	printf("%d\n",b[n]);
}
