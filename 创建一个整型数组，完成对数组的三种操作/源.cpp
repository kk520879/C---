#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

///*����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//*/
////ʵ������init()��ʼ������ȫΪ0
//void init(int* str, int sz)//������ֵ//�������*�ͻ���ֱ�������E0142
////                       �������ʽ�������ָ�������ָ�����ͣ������������͡�int��
//{
//	for (int i = 0; i < sz; i++)
//	{
//		str[i] = 0;//�������������ѭ�������0
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", str[i]);
//	}
//}
//
//
////ʵ��print()  ��ӡ�����ÿ��Ԫ��
//void print(int* str, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", str[i]);
//	}
//	printf("\n");//��ӡ��һ�����ͻ���
//}
//
//
////ʵ��reverse()  �����������Ԫ�ص����á�
//void reverse(int* str, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)//ѭ��������
//	{
//		int temp = 0;//������ʱ����
//		temp = str[left];//��temp��ֵΪ�±�Ϊleft������
//		str[left] = str[right];
//		str[right] = temp;
//		left++;//��ߵ��±�+1���ұ��ƶ�
//		right--;//�ұߵ��±�-1������ƶ�
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", str[i]);//ѭ����ӡ���ú�������ڵ�����
//	}
//
//}
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����ڵ�Ԫ������
//	/*init(arr, sz);//ʵ������init()��ʼ������ȫΪ0*///���Ҫ�����������Ҫ����һ��ע�͵�����Ϊ��һ�е������ǽ������ʼ��Ϊ0
//	print(arr, sz);//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//	reverse(arr, sz);//ʵ��reverse()  �����������Ԫ�ص����á�
//
//
//
//
//	return 0;
//}

