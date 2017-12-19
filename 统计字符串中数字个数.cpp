#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char a[64];
	scanf("%s",&a);
	int num=0;
	for(int i=0;i<strlen(a)-1;i++){
		if(  isdigit(a[i])==1 && isdigit(a[i+1])==0)
			num++; 
	}
	if(isdigit(a[strlen(a)-1])==1)
			num++; 
	printf("%d",num);
	return 0;
}
