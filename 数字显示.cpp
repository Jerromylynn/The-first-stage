#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int n,num,a[4],p;
	char arr[7][51]={
	"*****    ************   **************************",
	"*   *    *    *    **   **    *        **   **   *",
    "*   *    *    *    **   **    *        **   **   *",
	"*   *    **************************    ***********",
	"*   *    **        *    *    **   *    **   *    *",
	"*   *    **        *    *    **   *    **   *    *",
	"*****    ***********    ***********    ***********"
	} ;	     
	scanf("%d",&n);
	while(n--){
		scanf("%d",&num);
		p=num;
		for(int i=0;i<((int)log10(num)+1);i++)
		{
			a[i]=p%10;
			p/=10;
		}
		printf("%d:\n",num);
		for(int i=0;i<7;i++)
		{
			for(int k=(int)log10(num);k>=0;k--)
			{
				for(int j=a[k]*5;j<a[k]*5+5;j++)
				{
					printf("%c",arr[i][j]);
				}
				printf("  ");
			}
			printf("\n");
		}
	}
	return 0;
}
