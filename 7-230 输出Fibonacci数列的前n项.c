 #include<stdio.h>
 void ss(int n)
 {   static a=1,b=1,c,i=1;
 
 	if(n==0) return ;
 	if(i<=2) printf("%-10d",a);
 	else 
 	{
 	   c=b;b=a;a=a+c; printf("%-10d",a);
 	}   i++;
 	 	if(i%4==1)
 	 	printf("\n");
 	 	ss(n-1);
 }
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	ss(n);
 	return 0;
 }