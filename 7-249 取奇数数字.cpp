 
#include<stdio.h>
#include<string.h>
int i;
int main()
{
	int len;
	char s[21];gets(s);
	len=strlen(s);
	// printf("%d",len);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!='2'&&s[i]!='4'&&s[i]!='6'&&s[i]!='8'&&s[i]!='0')
		{
			printf("%c",s[i]);
		}
		
	}
	printf("\n");
	
}






//#include "stdio.h"
//int main() {
//	long x, s = 0, j = 0;
//	int n, i;
//	scanf("%ld", &x);
//	while (x) {
//		n = x % 10;
//		if (n % 2 != 0)
//			s = s * 10 + n;
//		x = x / 10;
//	}
//	while (s) {
//		i = s % 10;
//		j = j * 10 + i;
//		s = s / 10;
//	}
//	printf("%ld", j);
//}
