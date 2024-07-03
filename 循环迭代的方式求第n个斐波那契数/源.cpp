#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//循环的方法求出第n个斐波那契数
//1 1 2 3 5 8 13 21 34 55
//求第3个数也就是求2，需要进行一次运算
//求第4个数的时候需要运算两次
//求第五个数的时候要运算3次。
//所以求第n个数的时候，要运算n-2次


int Fib(int n)
{

	int a = 1;
	int b = 1;
	int c = 0;



	//n=1或者n=2的时候，可以不进入循环，n是3的时候大于2，就进去运算
	while (n > 2)//仅仅只有当n>2的时候我们才进行计算
	{
		c = a + b;
		a = b;
		b = c;
		n--;//当n是3的时候—1就是2，就不满足循环的条件
	}//当n是4的=时候，c=1+1=2,然后b就变成下一个运算中的a了，
	//第一个运算的c也变成第二个运算中的b了，然后第四个要求的数就是c了，
	//第一次运算的时候运行了一次n--.所以变成了3，在第二次运行的时候再次
	//运行就变成2了，就停止循环了
	return c;
	//当n=1时，不执行循环，直接返回c
	//当n=2时，不执行循环，直接返回c
}




int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int r = Fib(n);
	printf("%d", r);

	return 0;
}




//循环迭代---求第n个斐波那契数

int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	int a = 0, b = 1, c;
	for (int i = 2; i <= n; i++)
	{
		c = a + b;// 计算新的斐波那契数，即当前的 a 和 b 之和

		//下面的两步是将斐波那契数列不断向后面推进
		a = b;// 将 b 的值赋给 a，此时 a 存储 F(n-1)
		b = c;// 将新计算的 c 值赋给 b，此时 b 存储 F(n)
	}
	return b; //此时 b 存储 F(n)
}

int main()
{
	int n;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}