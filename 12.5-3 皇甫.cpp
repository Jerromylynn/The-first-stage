#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
	char a[2333];
	int cnt=0;
	int flag=0;
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		if(isdigit(a[i]))
		{
			if(flag==0)
			{
				cnt++;
				flag=1;
			}
		}
		else
		{
			flag=0;
		}
	}
	printf("%d",cnt);
}
