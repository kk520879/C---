#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//二分查找

//折半查找也叫二分查找
//查找的前提条件是数据是有序的

//通过下标选择中间元素

//一次二分查找如下
int main1()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//输入一个数组
	int k = 0;     //定义一个变量
	scanf_s("%d", &k);//输入要查找的值，假设是7
	int sz = sizeof(arr) / sizeof(arr[0]);    //得到数组的长度
	int left = 0;   // 左端下标
	int right = sz - 1;//左右下标确定，因为是从0开始的，所以右端下标要-1
	while (left <= right)//当left<=right时，应该就同时指向同一个数//此处为循环的的条件
	{
		int mid = (left + right) / 2;    //下标的中间值
		if (arr[mid] < k)//如果中间值对应的数小于想要查找的值，就从下标mid+1的后面开始寻找
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;//如果下标是中间值所对应的数字大于要寻找的数字，那么下标右边的数字可以不用看了，直接从中间值左边的那一个下标所对应的数字看起，左边的那个数字为新的right
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;  //找到了就break跳出循环
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}

//如果left<=right一直满足，程序就会一直循环，直到找到你输入的值



//思考：此处的while()里面的括号内能放1吗？
//因为找不到就死循环了，找不到不会break




//第二种写法：定义flag//定义flag为0，就是没找到，但是 如果找到了就定义flag成1，没找到依然为0
int main2()
{
	int flag = 0;//假设找不到为0
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//输入一个数组
	int k = 0;     //定义一个变量
	scanf_s("%d", &k);//输入要查找的值，假设是7
	int sz = sizeof(arr) / sizeof(arr[0]);    //得到数组的长度
	int left = 0;   // 左端下标
	int right = sz - 1;//左右下标确定，因为是从0开始的，所以右端下标要-1
	while (left <= right)//当left<=right时，应该就同时指向同一个数//此处为循环的的条件
	{
		int mid = (left + right) / 2;    //下标的中间值
		if (arr[mid] < k)//如果中间值对应的数小于想要查找的值，就从下标mid+1的后面开始寻找
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;//如果下标是中间值所对应的数字大于要寻找的数字，那么下标右边的数字可以不用看了，直接从中间值左边的那一个下标所对应的数字看起，左边的那个数字为新的right
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			flag = 1;  //找到就为1
			break;  //找到了就break跳出循环
		}
	}
	if (flag == 0)//如果变为0，就是没找到
	{
		printf("找不到");
	}

	return 0;
}


//为什么这里写的是sizeof，而不是strlen,因为strlen是求字符串长度的，而这里的arr被int定义为整型，strlen只能针对字符串或者字符数组


///用(left + right) / 2去求平均值存在问题，那么如何求两个较大的数的平均值呢？
//假设现在有两个数a和b，现在a>b，去求平均值，将a>b的那部分减下来，然后除以二，给b一部分，给a一部分，现在a=b现在a和b的值就是他们原先值的平均值，以后求平均值可以这么写
//int num = a+(b-a)/2
