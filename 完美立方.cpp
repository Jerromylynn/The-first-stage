#include <stdio.h>

int result(int b,int c,int d)
	{
		int i;
		i=b*b*b+c*c*c+d*d*d;
		return i;
	}
int main(void)
{
	int N;
	int a,b,c,d;
	do{
	printf("输入一个0~100的正整数：\n");
	scanf("%d",&N);
	}while(N<1||N>100);
	
	for(a=2;a<=N;a++)
        for(b=2;b<=N;b++)
            for(c=b;c<=N;c++)
			    for(d=c;d<=N;d++){
				
				    if(a*a*a==result(b,c,d)) 
					    printf("Cube=%d, Ttiple = (%d,%d, %d)\n",a,b,c,d);
	            }
	return 0;
	
}
