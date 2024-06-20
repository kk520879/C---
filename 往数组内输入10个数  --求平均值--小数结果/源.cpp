#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	double avg = 0;//avg是平均值英文的缩写
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum = sum + arr[i];
	}
	avg = sum / 10.0;//一定要是10.0，不然结果不会是小数的
	printf("%lf\n", avg);
	return 0;
}