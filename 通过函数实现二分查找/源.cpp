#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//дһ�����ֲ��Һ���
//���ܣ���һ�����������в���ָ������ֵ���ҵ��˾ͷ����±꣬�Ҳ����ͷ��� - 1.
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����һ������
	int k = 0;//����һ��������
	printf("������������ҵ�ֵ");
	scanf("%d", &k);//�������ֵ�����k��
	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ������
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;//�����м�ֵ����
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
		}
	}
	if (left > right)
	{
		printf("%d", -1);
	}



	return 0;
}
