#include<stdio.h>
int main(){
	int s[10000]={0};
	int n=0;
	int j; 
	for(int i=2;i<10000;i++)
	{
		for( j=2;j<i;j++)
		{
			if(i%j==0)
			break;
		}
		if(j==i)
		{s[n]=i;
		n++;} 
	}
	int x;
	scanf("%d",&x);
	for(int j=0;j<x;j++)
	{
		int temp;
		scanf("%d",&temp);
		int k=0;
		for(int i=0;;i++)
		{  
			while(temp%s[i]==0)
			{
				
				if(k==0)
				printf("%d",s[i]);
				else
				printf("*%d",s[i]);
				temp/=s[i];
				k++;
			} 
			if(temp<s[i+1])
			break;
		}
		printf("\n");
	}
	return 0;
}
