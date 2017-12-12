#include<stdio.h>
int main(){
	int m,n,t,x,a[100],b[100]; 
	scanf("%d",&m);scanf("%d",&n);scanf("%d",&t);//t=0右移  t=1左移  m->输入的数的个数  n->移动的位数 
	if(n>=m)
	n=n-m;//要移的位数 
    for(int i=0;i<m;i++){
	    scanf("%d",&a[i]);//保存每个数 
	}
	if(t==1){
	
	for(int i=m-1;i>=0;i--){
		x=i;
		if(x>=m-n){
		x=x-m+n;
		b[i]=a[x];}
		else
		b[i]=a[x+n];
	    }//换位
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



