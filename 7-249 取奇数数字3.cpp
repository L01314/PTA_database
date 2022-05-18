#include<stdio.h>
int main() {
	char num[20] = {0};
	int i = 0;
	scanf("%s", num);
	long double sum = 0;
	for (i = 0; i < 20; i++) {
		switch (num[i]) {
			case '1':
				sum = sum * 10 + 1;
				break;
		case '3':
					sum = sum * 10 + 3;
				break;
			case '5':
				sum = sum * 10 + 5;
				break;
			case '7':
				sum = sum * 10 + 7;
				break;
			case '9':
				sum = sum * 10 + 9;
				break;
			case '0':
				break;
			case '4':
				break;
			case '6':
				break;
			case '8':
				break;
		}
	}
	printf("%.0Lf", sum);
	return 0;
}
