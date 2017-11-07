#include <stdio.h>
int sum1(int x){
	int sum =0;
	int ge=0;
	do{
		ge=x%10;
		if(ge==1) sum++;
		x=(x-ge)/10;
	}while(x!=0);
	return sum;
}
int main(){
	int number,i;
	int sum=0;
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		sum+=sum1(i);
	}
	printf("1的个数为： %d\n",sum);
	return 0;	
}
