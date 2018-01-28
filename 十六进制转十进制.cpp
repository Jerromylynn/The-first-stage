#include<stdio.h>
#include<string.h>
int main(){
	char a[7];
	int b[4];
	int sum=0; 
	scanf("%s",&a);
	for(int i=2;i<6;i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			b[i-2]=a[i]-'a'+10;	
		}	
		if(a[i]>='0' && a[i]<='9')
		{
			b[i-2]=a[i]-'0';	
		}	
	}
	sum=b[0]*16*16*16+b[1]*16*16+b[2]*16+b[3];
	printf("%d",sum);
	return 0;
}
