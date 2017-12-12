#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int t;
	scanf("%d",&t);
	int a[1000];
	for(int i=0;i<n;i++)
	{
		a[i]=i+1; 
	}
	int p,q;
	for(int i=0;i<t;i++)
	{
		int m=0;
		scanf("%d%d",&p,&q);  
        while(a[m]!=p)
        m++;
        int xuehao=a[m];
        int mowei=m+q;
		int flag;
        if(q>0)
        flag=1;
        else
        flag=-1;
        if(mowei>n)mowei=n-1;
        if(mowei<0)mowei=0;
        while(m!=mowei)
        {  
            a[m]=a[m+flag];
            m=m+flag;
        }  
        a[m]=xuehao;
	}
    printf("%d",a[0]);  
	 for(int i=1;i<n;i++)  
        printf(" %d",a[i]);  
    return 0;  
}
