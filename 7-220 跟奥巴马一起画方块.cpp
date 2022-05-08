#include<stdio.h>
#include<math.h>
int main()
{ 
	double i,j,n;
	char ch;
	scanf("%lf %c",&n,&ch);
	for(i=0;i<round(n/2);i++)
	{
		for(j=0;j<n/2;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
}
