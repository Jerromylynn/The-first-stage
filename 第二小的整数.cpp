#include <stdio.h>
int main(){
	int n,i,k,m,t;
	int a[10000];
	int min1 , min2;

	printf("������һ��������");
	scanf("%d",&n);//��n���� 
	for(i=0;i<n;i++){
		scanf("%d",&m);//ÿ�������� 
		
		if(m<2)
		printf("ERROR\n");
	
		else{
		for(k=0;k<m;k++){
			scanf("%d",&a[k]);
		}
     	
	    min1=a[0];min2=a[1];
	    if(min1>min2){
	    min1=a[1];min2=a[0];}
	    else{
	    for(t=2;t<m;t++){
	        if(a[t]<=min1 ){ 
	           min2=min1;
			   min1=a[t];}
	        if(a[t]<=min2 && a[t]>min1)
	            min2=a[t];
	    } }
	        if(min1==min2)
	        printf("ERROR\n");
	        else
	        printf("%d\n\n",min2);
	    }
	}
	
	return 0;
}
