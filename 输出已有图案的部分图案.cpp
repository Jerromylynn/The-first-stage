#include<stdio.h>
#include<string.h>
int main(){
	char ss[8][10]=
	{"         ",
	 "--**-**--",
	 "-*-*****-",
	 "-*----**-",
	 "--*--**--",
	 "---***---",
	 "----*----",
	 "         "};
	int n;
	int c[9]={0};
	scanf("%d",&n);
	if(n<1||n>7){
		printf("Input Error\n");
		return 0;
	} 
	
	for(int i=1;i<7;i++)
	{
		for(int j=1;j<8;j++)
		{ 
			if(ss[i][j]=='*')
			{
				int b=0;
				for(int k=i-1;k<=i+1;k++)
				{
					for(int l=j-1;l<=j+1;l++)
					{
						if(ss[k][l]=='-')
						b++;
					}
				}
				c[b]++;
			}
		}
	}
	printf("%d\n",c[n]);
	return 0;
}
