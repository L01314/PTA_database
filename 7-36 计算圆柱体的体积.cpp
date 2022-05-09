#include<stdio.h>
double cy(double r,double h)
{
	double v;
	v=3.141592654*r*r*h;
	return v;
}
int main()
{
	double a,b,c;
	scanf("%lf%lf",&a,&b);
	c=cy(a,b);
	printf("Volume = %.3lf", c);
}
