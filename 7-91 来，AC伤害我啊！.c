 #include<stdio.h>
 int zz(int a,int b)
 {
 	return b==0?a:zz(b,a%b);
 }
 int main()
 {
    int n,i,a,b,z;
    scanf("%d",&n);
     if(n<=0)
         printf("WRONG");
     else
     {
         	for(i=0;i<n;i++)
     	 {
 	   scanf("%d%d",&a,&b);
 	      {
 	  	 z=zz(a,b);
 	   printf("%d %d\n",z,a*b/z);
 	      }
     	}
     }
 
 	
 }
 