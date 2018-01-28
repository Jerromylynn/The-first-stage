#include<stdio.h>
#include<string.h>
int spr1(char a[64]){
	int m=0,i=0;
	while(a[i++]){
		if(a[i]>47 && a[i]<58)
		m=m*10+a[i];
	}
	return m;
}

char spr2(char *a[64]){
	int i=0;
	char b[64]
	while(*a[i++]!=':')
	b[i]=*a[i];
	a=b[64];
}

int spr3(char *a[64],char b[],int num){
	for(int i=0;i<num;i++){
		if(*a[64]==b[i]){
			return 1 ;
		if(i=num-1)
		return 0;
		}
	}
}

int main(){
	int p;//权限种类数 
	char qxname[100][64];//权限名+等级数 
	int qxnumber[100];//权限等级数0~9  0表示不分等级 
	char qx1[100][64];//权限名 
	scanf("%d",&p);
	for(int i=0;i<p;i++){
		scanf("%s",&qxname[i]); //依次保留权限名称及等级数 
		qxnumber[i]=spr1(qxname[i]);
		spr2(&qx1[i]);
	}
	
	int r;//角色种类数 
	char rolename[100] [64];//角色名 
	int roleqxnum[100];// 角色权限数 
	char roleqx[100][64];//角色权限 
	char qx2[100][64];//角色拥有的权限名 
	for(int i=0;i<r;i++){
		scanf("%s",&rolename[i]);
		scanf("%s",&roleqxnum[i]);
		for(int j=0;j<roleqxnum[i];j++){
			scanf("%s",&roleqx[j]);
			spr2(&qx2[j]);
		}
	
	}
	
	int u;//用户数量
	char username[100][64];//用户名 
	int userrolenumber[100];//用户角色数 
	char userrolename[100][64];//用户角色名 
	for(int i=0;i<u;i++){
		scanf("%s",&username[i]);
		scanf("%s",&userrolenumber[i]) 
		for(int j=0;j<userrolenumber[i];j++){
			scanf("%s",&userrolename[j][64]);
		}
	}
		
	int q;//命令数
	char quser[100][64];//命令用户 
	char quserqxname[100][64];//命令权限名+等级 
	char quserqx[100][64]//命令权限名 
	for(int i=0;i<q;i++){
		scanf("%s",&quser[i]);
		scanf("%s",&quserqxname[i]);
		spr2(&quserqxname[i]);
	} 
	
	char zquanxianname[100][100][64];
	for(int i=0;i<q;i++){
		if(spr3(&quser[i],username,u)){
		
		for(int j=0;j<)
		strcat(zquanxianname[i][j][64])
		spr3(&quserqx[i],)
		}
		
	}
	
}
