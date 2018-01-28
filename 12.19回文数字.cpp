#include<stdio.h>
#include<string.h>
int huiwen(char x[]){
	int len=strlen(x);
	int i=0,t=0;
	while(x[i]==x[len-1-i]){
		t++; 
		if(i==len-1)
		break;
		i++;
	}
	if(t==len)	return 1;
	else        return 0;
}

int sum(char x[],int num){
	int sum=0;
	for(int i=0;i<strlen(x);i++){
		sum+=x[i]-48;
	}
	if(sum==num) return 1;
	else         return 0;
}

int main(){
	int num,q=0;
	char s[23];
	scanf("%d",&num);
	for(int i=10001;i<=999999;i++){
		sprintf(s,"%d",i);
		if(huiwen(s)==1 && sum(s,num)==1){
		printf("%d\n",i);
		q++; }
	}
	if(q==0)
	puts("-1");
	return 0; 
}





