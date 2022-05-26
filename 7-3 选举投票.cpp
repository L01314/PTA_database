#include <string.h>
#include <stdio.h>
#include <math.h>
struct houxuan
{
	int fen;
	int buzu;
	char name[10];
	char piao[10];
} x[10];

int bijiao(char a[10],char b[10]);

int main()
{
	int n,m,count=0,qi,i,j;
	int l=0,p;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(x[i].name);
	}
	scanf("%d\n",&m);
	for(i=0;i<m;i++)
	{
		gets(x[i].piao);
	}
	for(i=0;i<n;i++)
	{
		x[i].fen=0;
		for(j=0;j<m;j++)
		{
			if(bijiao(x[i].name,x[j].piao)==0)
			{
				x[i].fen +=1;
				x[j].buzu=2;
			}
		}
	}
	for(qi=0,i=0;i<m;i++)
	{
		if(x[i].buzu!=2)
			qi++;
	}
	for(p=0;p<n;p++)
	{
		j=0;
		for(i=0;i<n;i++)
		{
			if(x[j].fen<x[i].fen)
				j=i;
		}  
		printf("%s:%d\n",x[j].name,x[j].fen);
		x[j].fen=-12;
	}
	if(qi!=0)
	{
		printf("invalid vote:\n");
		for(i=0;i<m;i++)
		{
			if(x[i].buzu!=2)
			{
				puts(x[i].piao);
			}
		}
	}
}

int bijiao(char a[10],char b[10])
{
	int i=0;
	while(a[i]!='\0' && b[i]!='\0')
	{
		if(a[i]==b[i]) i++;
		else
		{
			if(a[i]>b[i])
			{
				if(a[i]>='a' && a[i]<='z' && b[i]>='A' && b[i]<='Z' && a[i]-32==b[i]) i++;
				else return 1;
			}
			else
			{
				if(a[i]>='A' && a[i]<='Z' && b[i]>='a' && b[i]<='z' && a[i]==b[i]-32) i++;
				else return -1;
			}
		}
	}
	if( a[i] =='\0' && b[i]=='\0') return (0);
	else  return (!0);
}
