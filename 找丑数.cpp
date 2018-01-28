#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		for(int j=1;j<=a;j++){
			int t=j,p=1;
			while(t>1 &&p==1){
				if(t%2==0) t/=2;
				if(t%3==0) t/=3;
				if(t%5==0) t/=5;
				if(t%5!=0 &&t%2!=0&&t%3!=0)
				p=0; 
			}
		if(t==1){
		printf("%d ",j); 
		}
	}
	printf("\n");
		}
		return 0;
	}
