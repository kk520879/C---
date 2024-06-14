#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 251,2,13,54,85,6,87,58,29,210 };
	int max = arr[0];//假设第一个数最大
	for (int i = 0; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}