 #include<stdio.h>
#include<string.h>
int main(){
	char ch[64];
	int m=0;
	scanf("%s",&ch);
	for(int i=0;i<strlen(ch)-2;i++)
		m=m*16+(ch[i+2]-48);
	
	printf("%d",m);
	return 0;
} 
