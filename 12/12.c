#include<stdio.h>
#define MAX 10
int front=-1,rear=-1,q[10];
void delq()
{
	if(front==rear)
		front=rear=-1;
	else
		front=(front+1)%MAX;
}
void insq(int i)
{
	if(front==-1)
		front=rear=0;
	else
		rear=(rear+1)%MAX;
	q[rear]=i;
}
int main()
{
	int t=0,i=1,j=1,cap,n,a,q=1,b;
	printf("\nEnter the bucket capacity:");
	scanf("%d",&cap);
	printf("\nEnter the rate at which packets must be sent:");
	scanf("%d",&b);
	printf("\nEnter no.of counts for which output should be shown:");
	scanf("%d",&n);
	for(a=0;a<n;a++)
	{
		t=(++t)%b;
		printf("t=%d\t",t);
		if(t==0)
		{
			delq();
			printf("%d Delivered\n",j);
			j++;
		}
		else
		{
			if((q-j)>=cap)
			{
				printf("%d discarded\n",i);
				i++;
			}
			else
			{
				printf("%d queued\n",i);
				insq(i);
				i++;
				q++;
			}
		}
	}
	return 0;
}
