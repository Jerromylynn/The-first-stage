#include<stdio.h>
#include<string.h>
struct Key
{
	int i;//��i�ν��� 
	int m[100];//���ʱ�� 
	int n[100];//����ʱ�� 
}key[1001];
int  main ()
{
	//freopen("txt.txt","r",stdin);
	int n;
	scanf("%d",&n);
	int u;
	scanf("%d",&u);
	int yaoshiwei[1001];//Կ��λ 
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
	for(i=1;i<=max;i++)//iʱ�� 
	{
		for(int k=1;k<=n;k++)//��k��Կ�� 
		{
		
			for(int d=1;d<=key[k].i;d++)//��d�ν��� 
			{
				if(key[k].n[d]==i)//�Ȼ�Կ�� 
				{
					for(int j=1;j<=1000;j++)//�ҵ���λ 
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
		for(int k=1;k<=n;k++)//��k��Կ�� 
		{
			for(int d=1;d<=key[k].i;d++)
			{
				if(key[k].m[d]==i)//ȡԿ�� 
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

