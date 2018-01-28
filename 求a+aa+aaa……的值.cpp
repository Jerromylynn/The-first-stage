#include<stdio.h>
void plus(int *m,int a){
	*m=(*m)*10+a;
}
int main(){
	int a,n,m=0;
	int sum=0;
	scanf("%d%d",&a,&n);
	m=a; 
	for(int i=0;i<n;i++){
		sum+=m;
		plus(&m,a);
	}
	printf("%d",sum);
	return 0;
} 
