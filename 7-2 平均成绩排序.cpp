#include<stdio.h>
int n,i,j,k;
struct node
{   int a,s,d;
	int num;
	char x[22];
	float aver;
}b[100],temp;
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s %d %d %d",&b[i].num,b[i].x,&b[i].a,&b[i].s,&b[i].d);
		b[i].aver=(b[i].a+b[i].s+b[i].d)/3.0;
		
		
	}
	
	for(i=0;i<n-1;i++)
	{ 
		for(j=0;j<n-1-i;j++)
		{
			
			if(b[j].aver<b[j+1].aver)
			{
				temp=b[j];b[j]=b[j+1];b[j+1]=temp;
			}
			
			
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d %s %.2f\n",b[i].num,b[i].x,b[i].aver);
	}
}
//
//
//#include<stdio.h>
//struct student{
//	int num,a,b,c;
//	char name[10];
//	double aver;
//}stu[10],temp;
//int main()
//{
//	int n,i,j;
//	
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		scanf("%d %s %d %d %d",&stu[i].num,stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c);
//		stu[i].aver=(stu[i].a+stu[i].b+stu[i].c)/3.0; //×¢ÒâÓÃ3.0
//	}
//	
//	for(i=0;i<n-1;i++){
//		for(j=0;j<n-1-i;j++){
//			if(stu[j].aver<stu[j+1].aver){
//				temp=stu[j];  
//				stu[j]=stu[j+1];  
//				stu[j+1]=temp;  				
//			}
//		}
//	}
//	
//	for(i=0;i<n;i++){
//		printf("%d,%s,%.2lf\n",stu[i].num,stu[i].name,stu[i].aver);
//	}
//	
//	return 0;
//}

