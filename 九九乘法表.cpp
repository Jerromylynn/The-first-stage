#include<stdio.h>
int main (){
	int x,y,t;
	for(x=1;x<=9;x++){
		for(y=1;y<=9;y++)
			printf("%5d",x*y);
		putchar('\n');		
	}
	return 0;
}
