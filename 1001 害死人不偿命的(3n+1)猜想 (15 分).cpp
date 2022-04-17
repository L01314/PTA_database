#include<stdio.h>
int main()
{
	int n,c=0;
	scanf("%d",&n);
	if(n==2)
	{
		printf("1");return 0;
	}
	while(n!=1){
		if(n%2==0)
		{
			n/=2;
			c++;
		}
		else
		{
			n=(3*n+1)/2;
			c++;
		}
	}
	printf("%d",c);
	return 0;
}
