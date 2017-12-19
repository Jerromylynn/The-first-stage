#include<stdio.h>
#include<string.h>
#include<math.h>
#define sqr(n) ((n)*(n))
typedef struct{
	double x;
	double y;
}point;

typedef struct{
	point pt;
	double fuel;
}car;

double distance_of(point pa , point pb){
	return sqrt(sqr(pa.x-pb.x)+sqr(pa.y-pb.y));
}

void put_info(car c){
	printf("��ǰλ�ã�(%0.2f , %0.2f)\n", c.pt.x,c.pt.y);
	printf("ʣ��ȼ�ϣ� %0.2f\n",c.fuel );
}

int move(car *c,point dest){
	double d=distance_of(c->pt,dest);
	if(d>c->fuel ) return 0;
	c->pt = dest;
	c->fuel -= d;
	return 1; 
}

int main(){
	car mycar={{0.00,0.00},90.0};
	while(1){
		int select;
		point dest;
		put_info(mycar);
		printf("����������[1--�� 0--��] ��");
		scanf("%d",&select);
		if(select!=1) break;
		printf("Ŀ�ĵص�X���꣺"); scanf("%lf",&dest.x );
		printf("        Y���꣺"); scanf("%lf",&dest.y );
		if(!move(&mycar,dest))
		puts("ȼ�ϲ��㣡 �޷���ʻ"); 
	} 
	return 0;
} 
 








