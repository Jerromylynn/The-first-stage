#include<stdio.h>
#include<ctype.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a>='a' && a<='z')
		{
			a=toupper(a);
		printf("%c",a);
		}
	else if(a>='A' && a<='Z')
	{
			a=tolower(a);
		printf("%c",a);}
	else
	printf("error");
	return 0;
}
