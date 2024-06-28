#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//利用上面实现的is_prime函数，打印100到200之间的素数。
int is_prime(int n)
{
	//1.产生100~200之间的数字 ---循环
//2.去判断每一组数组是否是素数，是素数就打印
//我们需要判断这个数字是否是素数，是素数就打印
//判断i是否是素数，素数只能被1和自身整除的
//如果2~i-1之间有任何一个数字能整除i，i就不是素数
//如果2~i-1之间所有数字能不能整除i，i就是素数


	int i = 0;
	for (i = 100; i <= n; i++)//
	{
		//printf("%d ", i);
		int flag = 1;
		int j = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)

			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
		}
	}

}

int main()
{
	is_prime(200);//在这里随时改变n的大小，可以因此来寻找100~n之间的素数
	return 0;
}