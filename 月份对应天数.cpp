#include<stdio.h>
int main(void)
{
	int x,y,z;
	printf("��ݣ�\n");
	scanf("%d",&x);
	printf("�·ݣ�\n");
	scanf("%d",&y);
	if(x%4==0&&x%100!=0) 
		switch(y) {
		case 1: puts("����=31"); break;
		case 3: puts("����=31"); break;
		case 5: puts("����=31"); break;
		case 7: puts("����=31"); break;
		case 8: puts("����=31"); break;
		case 10: puts("����=31"); break;
		case 12: puts("����=31"); break;
		case 4: puts("����=30"); break;
		case 6: puts("����=30"); break;
		case 9: puts("����=30"); break;
		case 11: puts("����=30"); break;
		case 2:puts("����=29");break;
	}else 
		switch(y){
	    case 1: puts("����=31"); break;
		case 3: puts("����=31"); break;
		case 5: puts("����=31"); break;
		case 7: puts("����=31"); break;
		case 8: puts("����=31"); break;
		case 10: puts("����=31"); break;
		case 12: puts("����=31"); break;
		case 4: puts("����=30"); break;
		case 6: puts("����=30"); break;
		case 9: puts("����=30"); break;
		case 11: puts("����=30"); break;
		case 2:puts("����=28");break;
}
	return 0;
	
}
