#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	double avg = 0;//avg��ƽ��ֵӢ�ĵ���д
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum = sum + arr[i];
	}
	avg = sum / 10.0;//һ��Ҫ��10.0����Ȼ���������С����
	printf("%lf\n", avg);
	return 0;
}