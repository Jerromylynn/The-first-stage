#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	scanf("%s",&a);
	scanf("%s",&b);
	int num=0;
	for(int i=0;i<=strlen(a)-strlen(b);i++){
		int m=0; int t=i;
		for(int j=0;j<strlen(b);j++){
			
			if(a[t]==b[j]){
				m++;
			}
			if(m==strlen(b))
			num++;
			t++; 
		}
		
	}
	printf("%d",num);
	return 0;
} 
