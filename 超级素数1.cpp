#include<stdio.h>
int isp(int n){
	int i;
	for(i=2;i<n;i++){
	    if (n%i==0)
	    return 0;
		}
	return 1;	
}

int main(){
	int b,m,x,s;
	int sum1=0,pro=1,sum2=0;
	int ssum1=0,ssum2=0;
	
	for(b=100;b<=9999;b++){
     	if(b-1000>=0)
		 	m=4;
    	else m=3;
    
		int a[4];
	    s=b;
    	for(int j=0;j<m;j++){
		a[j]=s%10;
		s/=10;
		sum1+=a[j];//��λ��֮�� 
		pro*=a[j];//��λ��֮�� 
		sum2+=a[j]*a[j];//��λ��ƽ���� 
    	}
 	if(isp(b)==1 && isp(sum1)==1 && isp(pro)==1 && isp(sum2)==1){ 
    	ssum1+=1; //������������ 
	    ssum2+=b;//���г��������� 
    	x=b;//��󳬼����� 
    	} 
    }
    printf("������������Ϊ��%d\n",ssum1);
    printf("���г�������֮��Ϊ��%d\n",ssum2);
    printf("���ĳ�������Ϊ��%d\n",x);
    return 0; 
} 
