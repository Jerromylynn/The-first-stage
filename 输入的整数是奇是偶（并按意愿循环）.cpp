 #include <stdio.h>
 int main(){
 	int retry;
 	do{
 		int no;
 		printf("������һ��������");
		scanf("%d",&no);
		if(no%2)
	    	puts("���������������\n");
		else
    		puts("���������ż����\n"); 
		
		printf("Ҫ�ظ������𣿡�yes����0��no����9��"); 
		scanf("%d",&retry);
	 }while(retry==0);
	 return 0;
 }
