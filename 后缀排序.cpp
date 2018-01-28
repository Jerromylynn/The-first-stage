#include<stdio.h>  
#include<string.h>
int main(){
	char all[10];
	char ch[10][10];
	scanf("%s",&all);
	memset(ch,'x',sizeof(ch));
	for(int i=0;i<strlen(all);i++)
	{
		int t=i;
		for(int j=0;j<(strlen(all)-i);j++)
		{
			ch[i][j]=all[t];
			t++;
		}
	}
	
	for(int i=0;i<strlen(all);i++){
		for(int j=(strlen(all)-1);j>i;j--)
		{
			if(all[j]<all[j-1])
			{
				char temp;
				temp=all[j-1];
				all[j-1]=all[j];
				all [j]=temp;
				
				
			}
		}
	}
	
	for(int i=0;i<strlen(all);i++)
	{
		for(int j=0;j<(strlen(all));j++)
		{
			if(ch[j][0]==all[i])
			{
				for(int t=0;t<(strlen(all)-j);t++)
				{
					printf("%c",ch[j][t]);
				}
			}
			
		}
	
		printf("\n");
	}
	return 0;
}
