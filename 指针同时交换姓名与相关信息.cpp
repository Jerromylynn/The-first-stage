#include<stdio.h>
#include<string.h>

#define name_len 64


void swap_int(int *x ,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void swap_str(char *px ,char *py){
	char pz[name_len];
	strcpy(pz,px);
	strcpy(px,py);
	strcpy(py,pz);
}

void sort(int height[], char name[][name_len], int x){
	for(int i=0;i<x;i++){
		for(int j=x-1;j>i;j--){
			if(height[j-1]>height[j]){
				swap_int(&height[j-1],&height[j]);
				swap_str(name[j-1],name[j]);
			}
		}
	}
}

int main(){
	int i;
	int height[]={178,175,173,165,179};
	char name[][name_len]={"sato","sanaka","yakao","mike","masaki"};
	for(i=0;i<5;i++){
		printf("%2d : %-8s%4d\n",i+1,name[i],height[i]); 
	}
	sort(height,name,5);
	puts("\n°´Éí¸ßÉýÐòÅÅÐò£º");
	for(i=0;i<5;i++){
		printf("%2d : %-8s%4d\n",i+1,name[i],height[i]); 
	}
	return 0;
} 
