#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求n的阶乘---循环迭代
int Fact(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;//就是ret = ret * i
	}
	return ret;
}




int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int r = Fact(n);
	printf("%d", r);

	return 0;
}
在输入数据是要判断n是否小于0
if (n < 0)
{
	printf("Factorial is not defined for negative integers.\n");
}
else
{
	int ret = factorial(n);
	printf("%d的阶乘是%d\n", n, ret);
}