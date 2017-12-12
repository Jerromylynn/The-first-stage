#include<stdio.h>
#include<string.h>
int main(){
	char str[10]="I love C";
	char *pstart=&str[0];
	char *pend=&str[strlen(str)-1];
	char temp;
	
	while(pstart<pend){
		temp=*pstart;
		*pstart=*pend;
		*pend=temp;
		pstart++;
		pend--;
	}
	printf("now the string is: %s\n",str);
	return 0;
} 
