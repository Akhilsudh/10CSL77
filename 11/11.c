#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long int e,d,n;
long int val[50];
char decode(long int ch)
{
	int i;
	long int temp=ch;
	for(i=1;i<d;i++)
		ch=(temp*ch)%n;
	return ch;
}
int gcd(long int a,long int b)
{
	long int temp;
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int prime(int a)
{
	int i;
	for(i=2;i<a;i++)
	{
		if((a%i)==0)
			return 0;
	}
	return 1;
}
int encode(char ch)
{
	int i;
	long int temp;
	temp=ch;
	for(i=1;i<e;i++)
		temp=(temp*ch)%n;
	return temp;
}
int main()
{
	int i;
	long int p;
	long int q,phi,c[50];
	char text[50],ctext[50];
	printf("enter the text to be encoded:");
	scanf("%s",text);
	do
	{
		p=rand()%100;
	}
	while(!prime(p));
	do
	{
		q=rand()%100;
	}
	while(!prime(q));
	n=p*q;
	phi=(p-1)*(q-1);
	printf("\np=%ld\tq=%ld\tn=%ld\tphi=%ld\n",p,q,n,phi);
	do
	{
		e=rand()%phi;
	}
	while(!gcd(e,phi));
	printf("e=%ld\n",e);
	do
	{
		d=rand()%phi;
	}
	while(((d*e)%phi)!=1);
	printf("\n******Encoding Message******\n");
	for(i=0;text[i]!='\0';i++)
		val[i]=encode(text[i]);
	val[i]=-999;
	printf("\nEncoded Message: ");
	for(i=0;val[i]!=-999;i++)
		printf("%ld",val[i]);
	printf("\n\n******Decoding Message******\n");
	for(i=0;val[i]!=-999;i++)
		ctext[i]=decode(val[i]);
	ctext[i]='\0';
	printf("\nDecoded Message is:%s\n\n",ctext);
}
