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
	int p;//Ȩ�������� 
	char qxname[100][64];//Ȩ����+�ȼ��� 
	int qxnumber[100];//Ȩ�޵ȼ���0~9  0��ʾ���ֵȼ� 
	char qx1[100][64];//Ȩ���� 
	scanf("%d",&p);
	for(int i=0;i<p;i++){
		scanf("%s",&qxname[i]); //���α���Ȩ�����Ƽ��ȼ��� 
		qxnumber[i]=spr1(qxname[i]);
		spr2(&qx1[i]);
	}
	
	int r;//��ɫ������ 
	char rolename[100] [64];//��ɫ�� 
	int roleqxnum[100];// ��ɫȨ���� 
	char roleqx[100][64];//��ɫȨ�� 
	char qx2[100][64];//��ɫӵ�е�Ȩ���� 
	for(int i=0;i<r;i++){
		scanf("%s",&rolename[i]);
		scanf("%s",&roleqxnum[i]);
		for(int j=0;j<roleqxnum[i];j++){
			scanf("%s",&roleqx[j]);
			spr2(&qx2[j]);
		}
	
	}
	
	int u;//�û�����
	char username[100][64];//�û��� 
	int userrolenumber[100];//�û���ɫ�� 
	char userrolename[100][64];//�û���ɫ�� 
	for(int i=0;i<u;i++){
		scanf("%s",&username[i]);
		scanf("%s",&userrolenumber[i]) 
		for(int j=0;j<userrolenumber[i];j++){
			scanf("%s",&userrolename[j][64]);
		}
	}
		
	int q;//������
	char quser[100][64];//�����û� 
	char quserqxname[100][64];//����Ȩ����+�ȼ� 
	char quserqx[100][64]//����Ȩ���� 
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
