#include <stdio.h>
#include <ctype.h>
void str_toupper( char s[]){
	int i=0;
	while(s[i]){
		s[i]=toupper(s[i]);
		i++;
	}
} 
void str_tolower( char s[]){
	int i=0;
	while(s[i]){
		s[i]=tolower(s[i]);
		i++;
	}
} 
int main(){
	char s[200];
	scanf("%s",s);
	str_toupper(s);
	printf("大写输出：%s\n",s);
	str_tolower(s);
	printf("小写输出：%s\n",s);
	return 0; 
	
}
