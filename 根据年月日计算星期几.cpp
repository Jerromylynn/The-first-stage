#include<stdio.h>
int main()
{
	int year,month,day,n;
	int a[13],i,sum1,sum2,sum;
	scanf("%d%*c%d%*c%d",&year,&month,&day);
	for(i=1;i<=12;i++)
	{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			a[i]=31;
		else if(i==4||i==6||i==9||i==11)
			a[i]=30;
	}
	if(year%4==0&&year%100!=0||year%400==0)
	{
		a[2]=29;
	}
	else 
		a[2]=28;
	sum1=0;sum2=day;sum=0;
	for(i=1900;i<year;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
			n=366;
		else 
		n=365;
		sum1+=n; 
	}
	
	for(i=1;i<month;i++)
		sum2+=a[i];
		sum=sum1+sum2;
	switch(sum%7)
	{
	case 0:printf("Sunday\n");break;
	case 1:printf("Monday\n");break;
	case 2:printf("Tuesday\n");break;
	case 3:printf("Wednesday\n");break;
	case 4:printf("Thusday\n");break;
	case 5:printf("Friday\n");break;
	case 6:printf("Saturday\n");break;
	}
	return 0;
}

