N#include <stdio.h>
int main(){
	double x,z;
	int y,m;
	printf("������һ������"); scanf("%lf\n",x); 
	y=x;
	z=x-y;
	if (z>=0.5)
	    m=y+1;
	else
	    m=y;
	printf("����������ֵΪ��%d\n",m);
	
    return 0;	
}
