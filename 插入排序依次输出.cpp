#include<stdio.h>
int main(){
	int n;
	int a[23]={0};
	scanf("%d",&n);
	scanf("%d",&a[0]);
	printf("%d\n",a[0]);
	int shu=1;
	for(int i=1;i<n;i++)
	{
		int temp;
		scanf("%d",&temp);
		if(temp<a[0])
		{
			for(int j=shu;j>=1;j--)
				a[j]=a[j-1]; 
			a[0]=temp;
		}
		else if(temp>=a[shu-1])
			   	a[shu]=temp;
		else
		{
			for(int k=0;k<=shu-2;k++)
			{
				if(temp>=a[k] && temp<=a[k+1])
				{
					for(int m=shu;m>=k+2;m--)
						a[m]=a[m-1];
					a[k+1]=temp;
					break;
				}
			 } 
		} 
		shu++;
		for(int h=0;h<shu;h++)
			printf("%d ",a[h]);
			printf("\n");
		
	}
	return 0;
	
} 
