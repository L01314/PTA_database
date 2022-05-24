#include<stdio.h>
int n,i,j,k;
struct node
{
	char x[6];
	char name[11];
	int c;
}b[100],max;
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %s %d",b[i].x,b[i].name,&b[i].c);
	max=b[0];
	for(i=0;i<n;i++)
	{
		if(b[i].c>max.c)
			max=b[i];
	}
	printf("%s %s %d",b[i].x,b[i].name,b[i].c);
}
