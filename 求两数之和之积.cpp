#include<stdio.h>
int main(void)
{
	int x1,x2,x3,y1,y2,y3,a,b,c,p,s;
	printf("请输入第一个点横坐标:"); scanf("%d",&x1);
	printf("请输入第一个点纵坐标:"); scanf("%d",&y1);
	printf("请输入第二个点横坐标:"); scanf("%d",&x2);
	printf("请输入第二个点纵坐标:"); scanf("%d",&y2);
	printf("请输入第三个点横坐标:"); scanf("%d",&x3);
	printf("请输入第三个点纵坐标:"); scanf("%d",&y3);
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    b=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    c=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    p=(a+b+c)/2;
    s=sqrt((p*(p-a)*(p-b)*(p-c));
    printf("三角形面积为：%d.\n",s);
	return  0;
	 
}
