#include<stdio.h>
#include<stdlib.h>
struct node
{
	int dist[20];
	int from[20];
}rt[10];
int main()
{
	int dmat[20][20],n;
	int i,j,k,count;
	printf("\n\nEnter the number of nodes:");
	scanf("%d",&n);
	printf("\nEnter the cost matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&dmat[i][j]);
			dmat[i][i]=0;
			rt[i].dist[j]=dmat[i][j];
			rt[i].from[j]=j;
		}
	}
	do
	{
		count=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					if((rt[i].dist[j])>(rt[i].dist[k]+rt[k].dist[j]))
					{
						rt[i].dist[j]=rt[i].dist[k]+rt[k].dist[j];
						rt[i].from[j]=k;
						count++;
					}
				}
			}
		}
	}
	while(count!=0);
	for(i=0;i<n;i++)
	{
		printf("\nrouter info for %d is:\n",i+1);
		printf("dest\tnexthop\tdist\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t%d\t%d\n",j+1,rt[i].from[j]+1,rt[i].dist[j]);
		}
	}
	return 0;
}
