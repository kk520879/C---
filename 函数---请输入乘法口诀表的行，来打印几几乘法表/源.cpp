#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。


void acc(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %d   ", j, i, i * j);
			if (i == j)
			{
				printf("\n");
			}
		}
	}
}

int main()
{
	int n = 0;
	printf("请输入乘法口诀表的行");
	scanf("%d", &n);
	acc(n);
	return 0;
}