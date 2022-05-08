#include<stdio.h>
struct node
{
   char name[10];
   int s;
   char tele[30];
}a[100],temp;
int i,j,n;
int main()
{
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	  scanf("%s %d %s",a[i].name,&a[i].s,a[i].tele);
  } 
  
   for(i=0;i<n-1;i++)
   { 
	   for(j=0;j<n-1-i;j++)
	   {
		   
		   if(a[j].s>a[j+1].s)
		   {
			   temp=a[j];a[j]=a[j+1];a[j+1]=temp;
		   }
	   }
   }
   for(i=0;i<n;i++)
   {
	   printf("%s %d %s\n",a[i].name,a[i].s,a[i].tele);
   }
}
