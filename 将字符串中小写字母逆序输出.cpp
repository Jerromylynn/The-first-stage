#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	getchar();//消除回车的影响 
	for(int i=0;i<n;i++){
		char a[233];
		gets(a);int m=strlen(a); 
		for(m-- ; m>=0 ; m--){
			if(a[m]>='a' && a[m]<='z')
			printf("%c",a[m]);
		}
		printf("\n");		
	}
	return 0;
}
