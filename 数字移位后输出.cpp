#include<stdio.h>
int main(){
	int m,n,t,x,a[100],b[100]; 
	scanf("%d",&m);scanf("%d",&n);scanf("%d",&t);//t=0����  t=1����  m->��������ĸ���  n->�ƶ���λ�� 
	if(n>=m)
	n=n-m;//Ҫ�Ƶ�λ�� 
    for(int i=0;i<m;i++){
	    scanf("%d",&a[i]);//����ÿ���� 
	}
	if(t==1){
	
	for(int i=m-1;i>=0;i--){
		x=i;
		if(x>=m-n){
		x=x-m+n;
		b[i]=a[x];}
		else
		b[i]=a[x+n];
	    }//��λ
    }
    if(t==0){
	
    for(int i=m-1;i>=0;i--){
		x=i;
		if(x<=n-1){
		x=x+m-n;
		b[i]=a[x];}
		else
		b[i]=a[x-n];
	    }}
	for(int t=0;t<=m-1;t++){
		printf("%d ",b[t]);
	} 
	return 0;
}



