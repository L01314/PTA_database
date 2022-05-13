#include<stdio.h>
int main() {
	int n, i, t,  j;
	int b[10] = {0};
	scanf("%d", &n);
	int a[n];
	
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
    for(j=0;j<n;j++)
	{
		while(1)
		{
			if(a[j]/10)
			{
				t=a[j]%10;
				b[t]++;
				a[j]/=10;
			}
			else
			{
			  b[a[j]]++;
			  break;
			}
		}
	}
	int max=0;
	for(i=0;i<10;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	printf("%d:",max);
	for(i=0;i<10;i++)
	{
		if(b[i]==max)
			printf(" %d",i);
	}
	return 0;
}


//
//#include<stdio.h>
//int main()
//{
//	int n,N, i, k, max = 0;   
//	int a[10] = { 0 };     
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &N);
//		while (N)     
//		{
//			k = N % 10;
//			a[k % 10]++;
//			N /= 10;
//		}
//	}
//	for (i = 0;i < 10;i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];   
//		}
//	}
//	printf("%d:", max);
//	for (i = 0;i < 10;i++)
//	{
//		if (max == a[i])
//		{
//			printf(" %d", i);
//		}
//	}
//	return 0;
//}
