#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	char retry;
	int i;
	srand(time(NULL));
	printf("��ʾ1~33���������\n");
	do
	{
	 	i=1+rand()%34; 
		printf("\t���������Ϊ��%d\n",i);
		printf("��������������:"); 
		getchar();
		scanf("%c",&retry);
	}while(1);
	
	return 0;
}
