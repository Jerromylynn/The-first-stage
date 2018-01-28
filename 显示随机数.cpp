#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	char retry;
	int i;
	srand(time(NULL));
	printf("显示1~33的随机数：\n");
	do
	{
	 	i=1+rand()%34; 
		printf("\t本轮随机数为：%d\n",i);
		printf("输入任意数继续:"); 
		getchar();
		scanf("%c",&retry);
	}while(1);
	
	return 0;
}
