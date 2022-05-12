#include<stdio.h>
char grade(int n)
{
	if(n>90)
		return 'a';
	else if(n>80)
		return 'b';
	else if(n>70)
		return 'c';
	else if(n>60)
		return 'd';
	else
		return 'e';
}
int main()
{
	int n;
	char m;
	scanf("%d",&n);
	m=grade(n);
	printf("%c",m);
	return 0;
}
