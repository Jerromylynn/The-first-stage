#include<stdio.h>
int isp(int n){
	int i;
	for(i=1;i<n;i++)
	if (n%i==0)
	return 0;
	return 1; 
}
int main(){
	int b,m,sum1=0,op=1,sum2=0,summ1=0,summ2=0, x=0;
	
	for(b=100;b<=9999;b++){
	
	
	if(b-1000>=0)
	m=4;
	else m=3;
	 
	 int a[m];
	 
	for(int j=0;j<m;j++){
		a[j]=(b%10);
		b/=10;
		sum1+=a[j];//2
		op*=a[j];//3
		sum2+=a[j]*a[j];//4
	}
	if(isp(b)==1 && isp(sum1)==1 && isp(op)==1 && isp(sum2)==1){ 
	summ1+=1; 
	summ2+=b;
	x=b;
	} 
}
    printf("������������Ϊ��%d",summ1);
    printf("���г���s����֮��Ϊ��%d",summ2);
    printf("���ĳ�������Ϊ��%d",x);
    return 0; 
} 
