#include<stdio.h>
int main()
{
	int i,j,n,m;
	scanf("%d%d",&m,&n);
	int a[100][100];
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int flag=0;
	for(i=2;i<=m-1;i++)
	{
		for(j=2;j<=n-1;j++)
		{
		if (a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j]>a[i][j - 1] && a[i][j] > a[i][j + 1])
			{
				printf("%d %d %d\n",a[i][j],i,j);
				flag=1;
			}
		}
	}
	if(flag==0)
		printf("None %d %d",m,n);
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int m, n, i, j;
//	scanf("%d%d", &m, &n);
//	int a[100][100];
//	for (i = 1; i <=m; i++)
//	{
//		for (j = 1; j <=n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	int flag = 0;//����һ����ǣ�ֻҪ��һ����������������Ǿͻ�仯����������ж��Ƿ����None������
//	for (i = 2; i <=m - 1; i++)
//	{
//		for (j = 2; j <= n - 1; j++)
//		{
//			if (a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j]>a[i][j - 1] && a[i][j] > a[i][j + 1])
//			{
//				printf("%d %d %d\n", a[i][j], i, j);
//				flag = 1;
//			}
//		}
//	}
//	if (flag == 0)
//		printf("None %d %d", m, n);
//	return 0;
//}
