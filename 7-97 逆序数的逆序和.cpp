#include<stdio.h>
int dd(int n)
{
	int sum;
	while(n)
	{
		sum=sum*10+n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int n,a,b,c,d,i,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		m=dd(b);
		printf("-----%d\n",m);
		c=dd(a)+dd(b);
		d=dd(c);
		printf("%d\n",d);
		
	}
	
}
