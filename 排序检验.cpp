#include <stdio.h>
void bsort( int a[],int m)
{
	int i=0,j;
	for(int k=0;k<m-1;k++) {
	
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
	int m,a[100]; 
    scanf("%d",&m);
	for(int i=0;i<m;i++){
	scanf("%d",&a[i]);
	if (i=0)
	printf("%4d\n",a[i]);
	else{
	 bsort(a,i+1);
	for(int z=0;z<i+1;z++){
		printf("%4d\n",a[z]);
	} }
	} 
	
	return 0;
}
