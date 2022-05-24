#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include "list.h" // 请不要删除，否则检查不通过

#define ElemType int
#define Stack_Size 50

typedef struct {
	ElemType elem[Stack_Size];
	int top;
}Stack;

bool push(Stack* S, ElemType x)
{
	if (S->top == (Stack_Size - 1))
		return(false);  /*栈已满*/
	S->top++;
	S->elem[S->top] = x;
	return(true);
}

bool pop(Stack* S, ElemType* x)
{
	/* 将栈S的栈顶元素弹出，放到x所指的存储空间中 */
	if (S->top == -1)  /*栈为空*/
		return(false);
	else
	{
		*x = S->elem[S->top];
		S->top--;    /* 修改栈顶指针 */
		return(true);
	}
}

void init_stack(Stack* S) {
	S->top = -1;
}


int compute_reverse_polish_notation(char* str)
{
	int i = 0;
	Stack S;
	init_stack(&S);
	ElemType number_to_push, num1, num2;
	while (str[i] != '\0') //防止字符串走到末尾
	{
		if (str[i] != ' ')//跳过空格
		{
			if (str[i] >= '0' && str[i] <= '9') //是数字
			{
				number_to_push = 0;
				while (str[i] != ' ' && str[i]) //将字符串转化为数字
				{
					number_to_push = number_to_push * 10 + (str[i] - '0');
					i++;
				}
				push(&S, number_to_push);
			}
			else 
			{
				pop(&S, &num2);
				pop(&S, &num1);
				switch (str[i]) 
				{
					case '+': {
						num1 += num2;
						break;
					}
					case '-': {
						num1 -= num2;
						break;
					}
					case '*': {
						num1 *= num2;
						break;
					}
					case '/': {
						num1 /= num2;
						break;
					}
					case '%': {
						num1 %= num2;
						break;
					}
				}
				push(&S, num1);
			}
		}
		i++;
	}
	pop(&S, &num1);//最后的结果
	return num1;
}


void test01()
{
	char arr[] = "1 2 2 + * 4 3 1 * * + 4 3 1 -2 * + /";
	int answer = compute_reverse_polish_notation(arr);
	printf("%s = %d",arr,answer);
}

int main()
{
	test01();
	return 0;
}
