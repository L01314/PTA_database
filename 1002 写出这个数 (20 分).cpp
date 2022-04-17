#include<stdio.h>
#include<string.h>
int main()
{
	int sum=0,t,len;
	int a[5];
	char n[105];
	char pinyin[][9] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	gets(n);
	len=strlen(n);
	for(int i=0;i<len;i++)
	{
		sum=sum+n[i]-'0';
	}
	while(sum!=0)
	{ a[t]=sum%10;
		sum/=10;
		t++;
	}
	printf("%s",pinyin[a[t-1]]);
	for(int i=t-2;i>=0;i--)
		printf(" %s",pinyin[a[i]]);
 
}
