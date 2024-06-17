#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int n;//输入的n就是行数
	while (scanf("%d", &n) != EOF)
	{
		//令i为行
		for (int i = 0; i < n; i++)//二维数组的行和列都是从0开始加的，假设有5行，那么最大i最大就是4
		{    //令j为列，为什么j<n的的原因和i一样
			for (int j = 0; j < n; j++)
			{///////下面的if语句就是满足该放*的位置的，不清楚的话可以话一下数组
				if (i == j || i + j == n - 1)//可以将二维数组画出来，n-1就是最大的行数表达的，假设总共5行，那么最大的行数表达就是4，最小的行数从0开始的
				{//上面的条件语句左边的是数组图像右斜杠，右边的是左斜杠
					printf("*");
				}
				else
				{
					printf(" ");//不满足情况的就打印空格
				}
			}
			printf("\n");//上面的是打印一行，打印完一行就换行
		}
	}
	return 0;
}