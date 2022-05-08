#include<stdio.h>

/*接受两数和对应的算术符号，然后返回两数处理后的值*/
float operation(float a, float b, char c) {
	float sum = 0;

	switch (c) {
		case '+':
			sum = a + b;
			break;

		case '-':
			sum = a - b;
			break;

		case '*':
			sum = a * b;
			break;

		case '/':
			sum = a / b;
			break;
	}
	return sum;
}
/*每次用一种符号表达式与24种排列做运算*/
int number(char* a, float*num) {
	float t1 = 0;
	float t2 = 0;
	float sum = 0;
	int i, j, k, l;

	for (i = 0; i < 4; ++i)
		for (j = 0; j < 4; ++j)
			for (k = 0; k < 4; ++k)
				for (l = 0; l < 4; ++l)
					if ( i != j && i != k && i != l && j != k && j != l && k != l ) {
						/*((3-2)x12)+12形式*/
						t1 = operation(num[i], num[j], *a);
						t2 = operation(t1, num[k], *(a + 1));
						sum = operation(t2, num[l], *(a + 2));
						if (sum == 24) {
							printf("((%.0f%c%.0f)%c%.0f)%c%.0f", num[i], *a, num[j], *(a + 1), num[k], *(a + 2), num[l]);
							return 1;
						}
						/*(3-(2x12))+12形式*/
						t1 = operation(num[j], num[k], *(a + 1));
						t2 = operation(num[i], t1, *a);
						sum = operation(t2, num[l], *(a + 2));
						if (sum == 24) {
							printf("(%.0f%c(%.0f%c%.0f))%c%.0f", num[i], *a, num[j], *(a + 1), num[k], *(a + 2), num[l]);
							return 1;
						}
						/*(3-2)x(12+12)形式*/
						t1 = operation(num[i], num[j], *a);
						t2 = operation(num[k], num[l], *(a + 2));
						sum = operation(t1, t2, *(a + 1));
						if (sum == 24) {
							printf("(%.0f%c%.0f)%c(%.0f%c%.0f)", num[i], *a, num[j], *(a + 1), num[k], *(a + 2), num[l]);
							return 1;
						}
						/*3-(2*(12+12))形式*/
						t1 = operation(num[k], num[l], *(a + 2));
						t2 = operation(num[j], t1, *(a + 1));
						sum = operation(num[i], t2, *a);
						if (sum == 24) {
							printf("%.0f%c(%.0f%c(%.0f%c%.0f))", num[i], *a, num[j], *(a + 1), num[k], *(a + 2), num[l]);
							return 1;
						}
						/*3-((2*12)+12)*/
						t1 = operation(num[j], num[k], *(a + 1));
						t2 = operation(t1, num[l], *(a + 2));
						sum = operation(num[i], t2, *a);
						if (sum == 24) {
							printf("%.0f%c((%.0f%c%.0f)%c%.0f)", num[i], *a, num[j], *(a + 1), num[k], *(a + 2), num[l]);
							return 1;
						}
					}
	return 0;
}
int main(void) {
	char a[6] = "+-*/";
	char b[64][5] = {0};
	float num[4] = {0};
	int i = 0, j = 0, k = 0, l = 0, m = 0;
	int count = 0;

	for (i = 0; i < 4; ++i)
		scanf("%f", &num[i]);

	for (i = 0; i < 4; ++i)
		for (j = 0; j < 4; ++j)
			for (k = 0; k < 4; ++k) {
				/*b数组存放64种符号表达式*/
				b[l][m] = a[i];
				b[l][m + 1] = a[j];
				b[l][m + 2] = a[k];
				++l;
			}
	for (i = 0; i < 64; ++i)
		if (number(b[i], num)) /*等于24，输出并终止程序*/
			return 0;
	printf("-1");
	return 0;
}

