#include<stdio.h>
int main()
{
	int n;
	double  r,h,ss=3.141592654;
	while(1)
	{
		printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
		scanf("%d",&n);
		switch (n) {
			case 1: 
			{
				
				printf("Please enter the radius:\n");
				scanf("%lf",&r);
				printf("%.2lf\n",4.0/3*ss*r*r*r);break;
			}
			
		case 2:
			{
				
				printf("Please enter the radius and the height:\n");
				scanf("%lf%lf",&r,&h);
				printf("%.2lf\n",1.0*ss*r*r*h);	break;
			}
		
		case 3:
			{
				
				printf("Please enter the radius and the height:\n");
				scanf("%lf%lf",&r,&h);
				printf("%.2lf\n",1.0*ss*r*r*h/3);	break;
			}
			default:return 0;
			
		}
		
	}
	return 0;
}
