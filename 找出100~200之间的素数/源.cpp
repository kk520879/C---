#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//打印100~200之间的素数
int main()
{
	int i = 0;
	for (i = 100; i < 200; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)//如果2~i-1之间有任何一个数字能整除i，i就不是素数
			{
				flag = 0;
				break;//如果i % j == 0,那么flag就会被赋值为0，这个数字就不会往后计算下去了，break跳出去，换另一个数字
			}
		}
		if (flag == 1)//i%j=1是！=0，多以i是素数
		{ //最开始给flag赋的值就是1，如果flag仍然==1，那么这个数就是素数，如果flag没有被赋值为0，那么flag的值还是1，就说明这个数满足i % j ！= 0，后面就讲这个满足条件的数字打印出来
			printf("%d", i);
		}
	}



	return 0;
}