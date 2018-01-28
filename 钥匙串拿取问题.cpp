#include<stdio.h>
#include<string.h>
void spr1(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void spr2(int a)
int main(){
	int n,k;//k次拿取 
	int key[20];
	int keynum[20],start[20],time[20],rtime[20];
	for(int i=0;i<n;i++){
		key[i]=i+1;	
	}
	for(int i=0;i<k;i++){//共k次拿取钥匙 
		scanf("%d",&keynum[i]);
		scanf("%d",&start[i]);
		scanf("%d",&time[i]);
		rtime[i]=start[i]+time[i];
	}
	
	for(int i=0;i<k;i++){
		for(int j=k-1;j>i;j--){
			if(start[j-1]<start[j]){
				spr1(&start[j-1],&start[j]);
				spr1(&keynum[j-1],&keynum[j]);
				spr1(&time[j-1],&time[j]);
			}
		}
	}
	
	for(int t=0;;t++){
		while(start[j]==t){
			for(int i=0;i<key;i++){
				if()
			}
		}
	}
}
