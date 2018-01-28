#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m,k;
		int c[20];
		scanf("%d%d",&m,&k);
		for(int j=0;j<m;j++){
			scanf("%d",&c[j]);
		}
		for(int q=0;q<m;q++){
			for(int p=m-1;p>q;p--){
				int temp;
				if(c[p]>c[p-1]){
					temp=c[p];
					c[p]=c[p-1];
					c[p-1]=temp;
				}
			}
		}
		int t=1,w=c[0];
		for(int p=0;p<m;p++){
			if(w!=c[p]){
				t++;
				w=c[p];
			}
			if(t==k){
				printf("%d\n",w);
				break;	
			} 
		}
		if(t<k)
		printf("error") ;
		}
		return 0;
	}
