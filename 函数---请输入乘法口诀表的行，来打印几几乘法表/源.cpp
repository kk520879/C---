#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���


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
	printf("������˷��ھ������");
	scanf("%d", &n);
	acc(n);
	return 0;
}