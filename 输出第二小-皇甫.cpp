#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b) 
{ 
     return(*(int *)a-*(int *)b);  
}
int main ()
{
	int a,b;
	int arr[101];
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b);
		if(b==1)
		{
			scanf("%d",&arr[0]);
			printf("ERROR\n");
			continue;
		}
		for(int n=0;n<b;n++)
		{
			scanf("%d",&arr[n]);
		}
		qsort(arr,b,sizeof(int),cmp);
		for(int n=0;n<b-1;n++)
		{
			/*if(arr[n]>arr[0]&&arr[n]<arr[b-1])
			{
			printf("%d\n",arr[n]);
			break;
			}
			if(n==b-1)
			printf("ERROR\n");*/
			if(arr[n]<arr[n+1])
			{
				printf("%d\n",arr[n+1]);
				break;
			}
			if(n==b-2)
			{

