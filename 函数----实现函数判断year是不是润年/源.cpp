#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int leap_year(int year)//leap year ����

{

	if ((year % 4 == 0 && year / 100 % �� = 0) || (year % 400 == 0))

	{

		return 1;

	}

	else

	{

		return 0;

	}

}

int main()

{

	int year;

	int ret = 0;//����ֵ

	printf("���������:");

	scanf("%d", &year);//���������ѯ�����

	ret = leap_year(year);

	if (ret == 1)

	{

		printf("%d��������\n", year);

	}

	else

	{

		printf("%d�������\n", year);

	}

	return 0;

}

