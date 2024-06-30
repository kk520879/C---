#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//写一个二分查找函数
//功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//创建一个数组
	int k = 0;//定义一个变量，
	printf("请输入你想查找的值");
	scanf("%d", &k);//把输入的值存放在k中
	int sz = sizeof(arr) / sizeof(arr[0]);//求出数组的元素数量
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;//定义中间值变量
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
		}
	}
	if (left > right)
	{
		printf("%d", -1);
	}



	return 0;
}
