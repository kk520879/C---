#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{                                                 //有必要的话还是画一下
				if (i == 0 || i == n - 1)//观察数组图形的样式
				{
					printf("* ");//第一行和最后一行，横向的，打印横着的
				}
				else if (j == 0 || j == n - 1)//上一个条件语句运行完就运行下面的条件语句
				{
					printf("* ");//纵向的，竖着的，打印竖着的
				}
				else
				{//下面要打两个空格
					printf("  ");//不满足条件的打印空格
				}
				//运行完if就不能运行else if

			}
			printf("\n");//在循环结束的时候换行，打印完一行就换行				
		}
	}

	return 0;
}
//注意：*后面要空格的，不然会报格式错误的