#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��n�Ľ׳�---ѭ������
int Fact(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;//����ret = ret * i
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
������������Ҫ�ж�n�Ƿ�С��0
if (n < 0)
{
	printf("Factorial is not defined for negative integers.\n");
}
else
{
	int ret = factorial(n);
	printf("%d�Ľ׳���%d\n", n, ret);
}