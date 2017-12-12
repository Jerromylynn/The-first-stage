#include<stdio.h>
#include<string.h>
int px(int x, int y){
	int t;
	if (x>y)
	t=1;
	if(x==y)
	t=0;
	if(x<y)
	t=-1;
	return t;
}
int hexcmp(char pa[]){
	int m=0;
	for(int i=2;i<(strlen(pa));i++){
		m=m*16+((pa[i])-'\0');
	}
	return m;
}
int main(){
	char a[64],b[64];
	int t;
	scanf("%s%s",&a,&b);
	t=px(hexcmp(a),hexcmp(b));
	printf("%d",t);
	return 0;
}
