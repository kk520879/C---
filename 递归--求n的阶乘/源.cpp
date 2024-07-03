#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//递归---求n的阶乘
//n的阶乘就是1~n的数字累计相乘
//n!=n*(n-1)!
//当n=0时，n的阶乘为1

int Fact(int n)//传参穿过来一个n
{
	if (n == 0)
		return 1;
	else if (n > 0)
		return n * Fact(n - 1);//就是n*(n-1)!
}



int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int r = Fact(n);//n的阶乘
	printf("%d\n", r);
	return 0;
}
//当输入数字是5的时候，n传上去的n是5，因为n>0,所以进行n * Fact(n - 1)、
//也就是n*(n-1)!    5*4!
//然后一次进行下去
//到最后，Fact（1）=1*Fact(0),因为Fact(0)=1，所以Fact（1）=1
//Fact（2）=2
//Fact（3）=6
//Fact（4）=24
//Fact（5）=120
//先递推再回归


// 检查输入是否为非负整数
if (n < 0) {
	printf("Factorial is not defined for negative integers.\n");
}
else {
	int ret = factorial(n);
	printf("%d的阶乘是%d\n", n, ret);
}