#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
	char a[6][10]={{"--**-**--"},
	{"-*--*--*-"},
	{"-*-----*-"},
	{"--*---*--"},
	{"---*-*---"},
	{"----*----"}};
	int x,y,w,h;
	scanf("%d%d%d%d",&x,&y,&w,&h);
	if(x>9||y>6||w>9||h>6||x+w<2||x+w>10||y+h<2||y+h>7||x<1||y<1||w<1||h<1)
	{
			printf("Input Error\n");
			return 0;
	}
	for(int k=y-1;k<y-1+h;k++)
	{
		for(int i=x-1;i<w+x-1;i++)
		{
			printf("%c",a[k][i]);
		}
		printf("\n");
	}
}
