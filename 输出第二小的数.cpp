#include <stdio.h>
void bsort( int a[],int m)
{
	int i,j;
	for(i=0;i<m-1;i++){
		for(j=m-1;j>i;j--){
			if(a[j-1]>a[j]){
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
int main(){
	int n,m;
    int p=0;

	scanf("%d",&n);//������ n 

	for(int i=0;i<n;i++){
		scanf("%d",&m);//ÿ�������� m
		int a[m]; 
	
		if(m<2)
		printf("ERROR\n");//����С�ڶ������� 
	
		else{ //��С�ڶ�ʱ 
	
	    for(int k=0;k<m;k++) 
		scanf("%d",&a[k]); //����ÿһ����
		
		bsort(a,m);//��С�������� 
	
		if(a[0]==a[m-1])
		printf("ERROR");
	    else
		//����ڶ�С 
		for(int p=0;p<m-1;p++){
		
		if(a[p]!=a[p+1]){
		
		    printf("%d",a[p+1]);
		    break;
	    }
			
		}
		}
    	} 
		return 0;
	} 
