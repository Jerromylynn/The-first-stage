#include<stdio.h>
#include<string.h>
struct Key
{
	int i;//第i次借用 
	int m[100];//借的时间 
	int n[100];//还的时间 
}key[1001];
int  main ()
{
	//freopen("txt.txt","r",stdin);
	int n;
	scanf("%d",&n);
	int u;
	scanf("%d",&u);
	int yaoshiwei[1001];//钥匙位 
	int i,max=-1;
	int r;
	for(r=1;r<=1000;r++)
	{
		yaoshiwei[r]=r;
		for(int k=0;k<100;k++)
		{
			key[r].m[k]=-1;
			key[r].n[k]=-1;
		}
		key[r].i=0;
	}
	while(u--)
	{
		scanf("%d",&i);
		key[i].i++;
		scanf("%d",&key[i].m[key[i].i]);
		scanf("%d",&key[i].n[key[i].i]);
		key[i].n[key[i].i] += key[i].m[key[i].i];
		if(key[i].n[key[i].i] > max)
		max=key[i].n[key[i].i];
	}
	for(i=1;i<=max;i++)//i时刻 
	{
		for(int k=1;k<=n;k++)//第k把钥匙 
		{
		
			for(int d=1;d<=key[k].i;d++)//第d次借用 
			{
				if(key[k].n[d]==i)//先还钥匙 
				{
					for(int j=1;j<=1000;j++)//找到空位 
					{
						if(yaoshiwei[j]==0)
						{
								yaoshiwei[j]=k;
								//printf("huanhui%dzaidi%d\n",k,j);
								break;
						}
					}
					break;
				}
			}
		}
		for(int k=1;k<=n;k++)//第k把钥匙 
		{
			for(int d=1;d<=key[k].i;d++)
			{
				if(key[k].m[d]==i)//取钥匙 
				{
					for(int j=1;j<=1000;j++)
					{
						if(yaoshiwei[j]==k)
						{
							yaoshiwei[j]=0;
							//printf("quchu%d\n",k);
							break;
						}
					}
					break;
				}
			}
		}
	}
	printf("%d",yaoshiwei[1]);
	for(i=2;i<=n;i++)
	{
		printf(" %d",yaoshiwei[i]);
	}
	printf("\n");
}

