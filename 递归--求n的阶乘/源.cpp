#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ݹ�---��n�Ľ׳�
//n�Ľ׳˾���1~n�������ۼ����
//n!=n*(n-1)!
//��n=0ʱ��n�Ľ׳�Ϊ1

int Fact(int n)//���δ�����һ��n
{
	if (n == 0)
		return 1;
	else if (n > 0)
		return n * Fact(n - 1);//����n*(n-1)!
}



int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int r = Fact(n);//n�Ľ׳�
	printf("%d\n", r);
	return 0;
}
//������������5��ʱ��n����ȥ��n��5����Ϊn>0,���Խ���n * Fact(n - 1)��
//Ҳ����n*(n-1)!    5*4!
//Ȼ��һ�ν�����ȥ
//�����Fact��1��=1*Fact(0),��ΪFact(0)=1������Fact��1��=1
//Fact��2��=2
//Fact��3��=6
//Fact��4��=24
//Fact��5��=120
//�ȵ����ٻع�


// ��������Ƿ�Ϊ�Ǹ�����
if (n < 0) {
	printf("Factorial is not defined for negative integers.\n");
}
else {
	int ret = factorial(n);
	printf("%d�Ľ׳���%d\n", n, ret);
}