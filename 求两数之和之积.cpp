#include<stdio.h>
int main(void)
{
	int x1,x2,x3,y1,y2,y3,a,b,c,p,s;
	printf("�������һ���������:"); scanf("%d",&x1);
	printf("�������һ����������:"); scanf("%d",&y1);
	printf("������ڶ����������:"); scanf("%d",&x2);
	printf("������ڶ�����������:"); scanf("%d",&y2);
	printf("������������������:"); scanf("%d",&x3);
	printf("�������������������:"); scanf("%d",&y3);
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    b=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    c=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    p=(a+b+c)/2;
    s=sqrt((p*(p-a)*(p-b)*(p-c));
    printf("���������Ϊ��%d.\n",s);
	return  0;
	 
}
