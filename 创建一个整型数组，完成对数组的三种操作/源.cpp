#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

///*创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//*/
////实现数组init()初始化数组全为0
//void init(int* str, int sz)//不返回值//如果不加*就会出现报错现象E0142
////                       报错：表达式必须包含指定对象的指针类型，但他具有类型“int”
//{
//	for (int i = 0; i < sz; i++)
//	{
//		str[i] = 0;//将数组里面的数循环定义成0
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", str[i]);
//	}
//}
//
//
////实现print()  打印数组的每个元素
//void print(int* str, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	printf("\n");//打印完一个数就换行
//}
//
//
////实现reverse()  函数完成数组元素的逆置。
//void reverse(int* str, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)//循环的条件
//	{
//		int temp = 0;//创建临时变量
//		temp = str[left];//给temp赋值为下标为left的数字
//		str[left] = str[right];
//		str[right] = temp;
//		left++;//左边的下标+1往右边移动
//		right--;//右边的下标-1往左边移动
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", str[i]);//循环打印逆置后的数组内的数字
//	}
//
//}
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组内的元素数量
//	/*init(arr, sz);//实现数组init()初始化数组全为0*///如果要运行下面的需要将这一行注释掉，因为这一行的任务是将数组初始化为0
//	print(arr, sz);//实现print()  打印数组的每个元素
//	reverse(arr, sz);//实现reverse()  函数完成数组元素的逆置。
//
//
//
//
//	return 0;
//}

