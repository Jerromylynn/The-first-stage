#include <stdio.h>
int main (){
	int hand,i;
	do{
	printf("�װ����ż������0-9֮��ѡ��һ������");
	scanf("%d",&hand);
    }while(hand<0||hand>9);
    
    printf("��ѡ�����±��ӳ�Ϊ��");
	switch(hand){
	    case 3:
	    case 4:
	    case 5:
	    case 6:
	    case 7:
	    case 8:
	    case 9:
	    case 2:
	    case 0:puts("����ͮ����^(*��(oo)��)^"); break;
		case 1:puts("����ͮ��С��Ů"); break; 
    }
	printf("Ҫ����ѡ���𣿡�yes����0/no����9��");
	scanf("%d",&i);
	if(i==0) 
	puts("����ֻ��������ͮ����.  ������������~~\n\n");
	
    return 0;
}
