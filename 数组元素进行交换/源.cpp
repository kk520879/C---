#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// ������A�е����ݺ�����B�е����ݽ��н�����������һ����
int main()
{

	int arr1[3] = { 1,2,3 };//��������
	int arr2[3] = { 6,7,8 };

	for (int i = 0; i < 3; i++)
	{
		int tmp = arr1[i];//������ʱ����
		arr1[i] = arr2[i];//���������е��±���ͬ�Ĳ�ͬ����ͨ����ʱ�������н��������ھ����ڽ���
		arr2[i] = tmp;
	}//�������齻�����
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr1[i]);//ѭ����ӡ����arr1�ڵ�����
	}
	printf("\n");//��ӡһ�����ͻ���


	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr2[i]);//ѭ����ӡ����arr2�ڵ�����
	}
	return 0;
}