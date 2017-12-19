#include<stdio.h>
#include<string.h>
int main(){
	char str1 [64];
		char str2 [64];
		char str3[64];
		scanf("%s",&str1);
		scanf("%s",&str2);
		int m=0;
		for(int i=0;i<strlen(str1);i++){
			int n=0;
			for(int j=0;j<strlen(str2);j++){ 
				if(str1[i]!=str2[j])
				n++;
				if(n==strlen(str2)){
					str3[m]=str1[i];
					m++; 
				}
				
			}
			if(i==strlen(str1)-1 && m==0){
				printf("null\n");
				return 0;
			}
		
		}	 
		for(int i=0;i<strlen(str3);i++){
			for(int j=strlen(str3)-1;j>i;j--){
				if(str3[j-1]>str3[j]){
					char temp;
					temp=str3[j-1];
					str3[j-1]=str3[j];
					str3[j]=temp;
				}
			}
		}
		printf("%s",str3);

	return 0;
}
