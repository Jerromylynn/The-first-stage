#include <stdio.h>
int main()
{
	int i,a,q,m=0,t,n;

	printf(" ");scanf("%d",&n);//���� 
	for(i=1;i<=n;i++){
		printf("");scanf("%d",&a);//������Ϊa 
		for(q=a;q>0;q--){
			if(a%q==0){
				m++;
				t=a/q;
				if(t>q)
				break;
				if(t<=q)
				a=t;
				break;	
			}
			
		}
		printf("%d",m);
    }
	return 0;
}
