#include <stdio.h>
int main(){
	int year,month,day;
	int sum=0;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("请依次输入年、月、日"); 
	scanf("%d%d%d",&year,&month,&day);
	for(int i=0;i<month-1;i++){
		sum+=a[i];
	}
	sum+=day;
	if(year%4==0 && year%100==0 && month>2)
	sum++;
	printf("%d年%d月%d日时是本年的第%d天",year,month,day,sum);
	return 0;
}
