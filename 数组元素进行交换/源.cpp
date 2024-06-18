#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
int main()
{

	int arr1[3] = { 1,2,3 };//创建数组
	int arr2[3] = { 6,7,8 };

	for (int i = 0; i < 3; i++)
	{
		int tmp = arr1[i];//创建临时变量
		arr1[i] = arr2[i];//两个数组中的下标相同的不同数字通过临时变量进行交换。现在就是在交换
		arr2[i] = tmp;
	}//两个数组交换完成
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr1[i]);//循环打印数组arr1内的数字
	}
	printf("\n");//打印一个数就换行


	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr2[i]);//循环打印数组arr2内的数字
	}
	return 0;
}