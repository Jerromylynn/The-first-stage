#include<stdio.h>
int main(){
	int n;
	int year; 
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&year);
		if(year%4==0 && year%100!=0)
		{
			printf("yes\n");
		}
		else if(year%400==0)
			printf("yes\n");
		else printf("no\n");
	} 
	return 0;
} 
