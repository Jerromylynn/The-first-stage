#include <stdio.h>
int main(){
	int n,a[20];
	scanf("%d",&n);
	for(int i=0; i<n ;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}	putchar('\n');
	
	for(int i=0;i<n;i++){
		for(int j=n-2;j>=i;j--){
			int m;
			if(a[j]<a[j+1])
			m=a[j];
			a[j]=a[j+1];
			a[j+1]=m;
			
	}for(int i=0;i<n;i++){
		    printf("%d ",a[i]);
		    }
		    
	}putchar('\n');
	return 0;
}
