#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int leap_year(int year)//leap year 闰年

{

	if ((year % 4 == 0 && year / 100 % ！ = 0) || (year % 400 == 0))

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

	int ret = 0;//返回值

	printf("请输入年份:");

	scanf("%d", &year);//输入你想查询的年份

	ret = leap_year(year);

	if (ret == 1)

	{

		printf("%d年是闰年\n", year);

	}

	else

	{

		printf("%d年非闰年\n", year);

	}

	return 0;

}

