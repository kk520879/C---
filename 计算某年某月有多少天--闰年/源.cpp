#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//假设我们某年某月有多少天
//只有闰年的2月有29天，需要对y判断是否是闰年

//函数只有两种返回
//是闰年
//不是闰年
int  is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))//闰年的判断，
		return 1;//如果是闰年就返回1
	else
		return 0;//不是闰年就返回0
}


int get_days_of_month(int y, int m)//接受年和月//这里我们需要返回一个整型
{
	int days[] = { 0,  31,28,31,30,31,30,31,31,30,31,30,31 };
	//             0  1  2  3  4  5  6  7  8  9  10  11      下标
	int day = days[m];
	if (is_leap_year(y) == 1 && m == 2)//如果是闰年就返回一，表示为真的,并且m是二月
	{
		day++;//闰年二月的时候，天数+1，为29天
	}
	return day;//如果不是二月就返回day


}



int main()
{
	int month = 0;
	int year = 0;
	scanf("%d %d", &year, &month);
	//计算某年某月有多少天
	int day = get_days_of_month(year, month);//这个函数传了年和月
	printf("%d\n", day);
	return 0;
}



//main函数调用get_days_of_month去计算某年某月有多少天
//get_days_of_month这个函数内部又要通过is_leap_year判断输入的数是否是闰年
//17行的 == 1可以不写





//做出改变，用布尔类型来做：
//bool  is_leap_year(int y)    //布尔类型，判断真假
//{
//	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))//闰年的判断，
//		return true;//如果是闰年就返回true
//	else
//		return false;//不是闰年就返回false
//}