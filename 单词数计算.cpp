#include<stdio.h>
#include<string.h>
int main(){
	char  str[233];
	gets(str);
	char ch[40][40];
	int i;
	for(int m=0;m<strlen(str);m++)
	{
		if(str[m]>='A' && str[m]<='Z')
		{
			str[m]=str[m]-('A'-'a');
		}
	}
	for(i=0;;i++)
	{
		ch[0][i]=str[i];
		if(str[i+1]<'a'||str[i+1]>'z')
		break;
	}
	i++;
	int t=1;
	while(str[i]!='\0'){
		if(str[i]<'a'||str[i]>'z' && str[i+1]>='a'&&str[i+1]<='z') 
		{
			i++;
			for(int k=0;;k++){
				ch[t][k]=str[i];
				if(str[i+1]<'a'||str[i+1]>'z')
				break;
				i++;
			}
			t++;
		}
		else i++;
	}
	printf("%d\n",t-1);
	for(int k=0;k<t;k++)
	{
		printf("%s\n",ch[k]);
	}
	return 0;
		
}
