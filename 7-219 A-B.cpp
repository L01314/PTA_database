//#include<stdio.h>
//#include<string.h>
//int i,j,k;
//char a[1005],b[1005];
//int main()
//{
//	gets(a);
//	gets(b); 
//	for(i=0;i<strlen(a);i++)
//	{ 
//		if(strchr(b,a[i]))
//			continue;
//		else 
//			printf("%c",a[i]);
//	}
//}

#include<stdio.h>
#include<string.h>
int main()
{
	char a[10001] = { 0 }, b[10001] = { 0 };
	gets(a);
	gets(b);
	for (int i = 0;i < strlen(a);i++)
	{
		if (strchr(b, a[i]))
			continue;
		else
			printf("%c", a[i]);
	}
	return 0;
}


