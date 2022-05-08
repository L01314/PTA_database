#include<stdio.h>
int ch,n,i,j;
int main()
{
	ch='A';
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	    for(j=0;j<i;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
