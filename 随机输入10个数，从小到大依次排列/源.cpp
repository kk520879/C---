#define _CRT_SECURE_NO_WARNINGS 1
//冒泡排序
//外层循环表示排的次数
//内层循环表示每次的比较数据
#include <stdio.h>

int main() {
	// 初始化一个包含 10 个整数的数组
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

	// 使用冒泡排序算法对数组进行排序
	for (int i = 0; i < 9; i++)
	{
		// 外循环，控制比较轮数，因为每次最大的数都会沉到最后，所以只需要比较 n-1 轮即可
		for (int j = 0; j < 10 - 1 - i; j++)
		{
			// 内循环，控制每轮比较的次数，每轮比较相邻的两个数
			if (arr[j] > arr[j + 1])
			{
				// 如果前一个数大于后一个数，就交换它们的位置，使得较大的数往后移动
				int t = arr[j];
				// 临时变量 t 用于交换两个数的值
				arr[j] = arr[j + 1];
				// 将后一个数赋值给前一个数
				arr[j + 1] = t;
				// 将临时变量中存储的前一个数的值赋值给后一个数，完成交换
			}
		}
	}
	// 打印排序后的数组
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);  // 以制表符分隔的形式打印数组中的每个元素
	}

	return 0;
}


//疑点1
//为什么第一个for循环中，循环次数是9（i<9）


//模拟一下循环过程
//第一轮循环：
//在第一轮循环中，面对10个数，我们需要进行9次比较
//进行之后，最大的数9已经变到最底部了
//第二论循环中，我们就只需要进行8次比较了，因为第一轮的比较已经将最大的数字沉底
//进行之后，现在最大的数字8也就到了底部
//在这个例子中，我们可以看到在每一轮的循环中，最后一个元素都会背确定为当前轮次的最大值
//因此我们可以在下一轮循环时少进行一次比较
//所以我们循环的表达式设置为i<9



//疑点2
//为什么内层循环，循环的上限是 10-1-i
//10是数组的长度，i是外层循环的当前轮次
//具体来说，假设我们有一个长度为10的数组，当前外层循环的轮次是0
//在第一轮循环结束的时候，数组的最后一个元素已经是最大的了，因此不用参加比较
//所以内层循环的上限就是 10-1-0
//当外层循环进行到第二轮的时候，i=1；
//在第二轮循环结束后，数组的倒数第二大的元素已经是次大，因此不需要再次参加比较
//此时内层循环的上限就是 10-1-1
//类推，随着外层循环的进行，每一轮内层循环的上限都会逐渐减小
