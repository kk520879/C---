#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int sum = 0;
    int num;
    float average;

    printf("������10�����֣�\n");

    // ѭ����ȡ10�����֣����������ǵ��ܺ�
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        sum += num;
    }

    // ����ƽ��ֵ
    average = (float)sum / 10;

    printf("��10�����ֵ�ƽ��ֵ�ǣ�%f\n", average);

    return 0;
}