#include<stdio.h>
int main()
{ 
	double eps,i,sum=1,num=1;
	scanf("%le", &eps);
	for(i=1;num>eps;i++)
	{
		num=num*i/(i*2+1);
		sum+=num;
	}

	printf("PI=%0.5f",sum*2);
}
