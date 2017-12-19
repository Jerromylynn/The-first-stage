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
	printf("当前位置：(%0.2f , %0.2f)\n", c.pt.x,c.pt.y);
	printf("剩余燃料： %0.2f\n",c.fuel );
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
		printf("开动汽车吗？[1--是 0--否] ：");
		scanf("%d",&select);
		if(select!=1) break;
		printf("目的地的X坐标："); scanf("%lf",&dest.x );
		printf("        Y坐标："); scanf("%lf",&dest.y );
		if(!move(&mycar,dest))
		puts("燃料不足！ 无法行驶"); 
	} 
	return 0;
} 
 








