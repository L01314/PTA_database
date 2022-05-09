#include<stdio.h>
long long  zz(long long  a,long long b)
{
	return b==0?a:zz(b,a%b);
}
int main()
{
	long long  x,y,z; 
	while(~scanf("%lld%lld",&x,&y))
		
	{
		z=zz(x,y); 
		if(x<0||y<0)
			
			printf("%lld %lld\n",-z,-x*y/z);
		else 
			
			printf("%lld %lld\n",z,x*y/z);
	}
	return 0; 
}
