#include<stdio.h>
#include<time.h>
int main(){
	time_t current=time(NULL);//time_t 日历类型变量  从1900年1月1日0时0分0秒开始至今经过的秒数作为具体数值 
						   	//time 获取当前时间的函数 
	struct tm *timer=localtime(&current);//tm 保存年月日时分秒星期的结构体   localtime 从日历时间转为分解时间 
	char *wday[]={"日","一","二","三","四","五","六"};
	printf("当前日期及时间为 ： %d年 %d月 %d日（周%s) %d时 %d分 %d分 %d秒\n",
			timer->tm_year+1900,// 
			timer->tm_mon+1,
			timer->tm_mday,
			wday[timer->tm_wday],
			timer->tm_hour,
			timer->tm_min,
			timer->tm_sec);
			 
	return 0;
}
