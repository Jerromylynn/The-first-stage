#include <stdio.h>
#include <string.h>
typedef struct {
	char name[64];
	int high;
	float weight;
	long schols;
}student;

int main(){
	student mystudents[2]={
	{ "takao",179,62,7800},
	{ "zhoujie",172,52,1200000}};
    mystudents[0]=mystudents[1];
	printf("%s\n%d\n%lf\n%ld\n",mystudents[0].name ,mystudents[0].high ,mystudents[0].weight, mystudents[0].schols );	
			return 0;
} 
