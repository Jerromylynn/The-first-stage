#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int r,c;
	scanf("%d%d",&r,&c);
	int s[20][20];//s[r][c]
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&s[i][j]); 
		}
	}
	int t;
	int rd=0,cd=0,ra=0,ca=0;
	scanf("%d",&t);//ÃüÁî
		for(int i=0;i<t;i++){
		int a,b;
		char min[10];
		scanf("%s",&min);
		scanf("%d",&a);
		if(min[0]=='S')
			scanf("%d",&b);

		if(min[0]=='S' && min[1]=='R')//1
			for(int i=0;i<c;i++){
				int temp;
				s[a-1][i]=temp;
				temp=s[b-1][i];
				s[b-1][i]=s[a-1][i];
			}
		if(min[0]=='S' && min[1]=='C'){//2
			for(int i=0;i<r;i++){
				int temp;
				temp=s[i][a-1];
				s[i][a-1]=s[i][b-1];
				s[i][b-1]=temp;
			}
		}
	
		if(min[0]=='D'&&min[1]=='R'){//3
			for(int i=a-1;i<r-1;i++){
				for(int j=0;j<c;j++){
					s[i][j]=s[i+1][j];
				}
			}
			rd--;
		}	
		if(min[0]=='D'&& min[1]=='C'){//4
		for(int i=a-1;i<c-1;i++){
			for(int j=0;j<r;j++){
				s[i][j]=s[i+1][j];
			}
		}
			cd--;
		}
		if(min[0]=='I'&&min[1]=='R'){//5
			for(int i=r;i>a-1;i--){
				for(int j=0;j<c;j++){
					s[i][j]=s[i-1][j];
					s[a-1][j]=0;
				}
			}
			
			ra++;
		}
		if(min[0]=='I'&&min[1]=='C'){//6
			for(int i=c;i>a-1;i--){
				for(int j=0;j<r;j++){
					s[j][i]=s[j][i-1];
					s[a-1][j]=0;
				}	
		}
			ca++;
	} 
	}	
	int rr=r+ra+rd, cc=c+ca+cd;
	for(int i=0;i<rr;i++){
		for(int j=0;j<cc;j++){
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	return 0; 
} 
