#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��������ĳ��ĳ���ж�����
//ֻ�������2����29�죬��Ҫ��y�ж��Ƿ�������

//����ֻ�����ַ���
//������
//��������
int  is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))//������жϣ�
		return 1;//���������ͷ���1
	else
		return 0;//��������ͷ���0
}


int get_days_of_month(int y, int m)//���������//����������Ҫ����һ������
{
	int days[] = { 0,  31,28,31,30,31,30,31,31,30,31,30,31 };
	//             0  1  2  3  4  5  6  7  8  9  10  11      �±�
	int day = days[m];
	if (is_leap_year(y) == 1 && m == 2)//���������ͷ���һ����ʾΪ���,����m�Ƕ���
	{
		day++;//������µ�ʱ������+1��Ϊ29��
	}
	return day;//������Ƕ��¾ͷ���day


}



int main()
{
	int month = 0;
	int year = 0;
	scanf("%d %d", &year, &month);
	//����ĳ��ĳ���ж�����
	int day = get_days_of_month(year, month);//����������������
	printf("%d\n", day);
	return 0;
}



//main��������get_days_of_monthȥ����ĳ��ĳ���ж�����
//get_days_of_month��������ڲ���Ҫͨ��is_leap_year�ж���������Ƿ�������
//17�е� == 1���Բ�д





//�����ı䣬�ò�������������
//bool  is_leap_year(int y)    //�������ͣ��ж����
//{
//	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))//������жϣ�
//		return true;//���������ͷ���true
//	else
//		return false;//��������ͷ���false
//}