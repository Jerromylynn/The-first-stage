#include<stdio.h>
#include<time.h>
int main(){
	time_t current=time(NULL);//time_t �������ͱ���  ��1900��1��1��0ʱ0��0�뿪ʼ���񾭹���������Ϊ������ֵ 
						   	//time ��ȡ��ǰʱ��ĺ��� 
	struct tm *timer=localtime(&current);//tm ����������ʱ�������ڵĽṹ��   localtime ������ʱ��תΪ�ֽ�ʱ�� 
	char *wday[]={"��","һ","��","��","��","��","��"};
	printf("��ǰ���ڼ�ʱ��Ϊ �� %d�� %d�� %d�գ���%s) %dʱ %d�� %d�� %d��\n",
			timer->tm_year+1900,// 
			timer->tm_mon+1,
			timer->tm_mday,
			wday[timer->tm_wday],
			timer->tm_hour,
			timer->tm_min,
			timer->tm_sec);
			 
	return 0;
}
