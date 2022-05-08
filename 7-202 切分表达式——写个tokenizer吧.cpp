#include<stdio.h>
#include<string.h>
int i,j,len;
char a[45];
int main()
{
    gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if((a[i]>='0'&&a[i]<='9')&&(a[i+1]>='0'&&a[i+1]<='9'))
			printf("%c%c\n",a[i],a[i+1]);
		else
			printf("%c\n",a[i]);
	}
	return 0;
}
