#include<stdio.h>
int n,i,j,k;
struct node
{   
	char x[6];
	char name[22];
	int c,a,b,d;
	float 
}b[100],temp;
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s %d",b[i].x,b[i].name,&b[i].c);
	}
	
	
	for(i=0;i<n;i++)
	{ 
		for(j=0;j<i;j++)
		{
			
			if(b[j].c>b[j+1].c)
				temp=b[j];b[j]=b[j+1];b[j+1]=temp;
		}
	}
	printf("%s %s %d",max.x,max.name,max.c);
}
