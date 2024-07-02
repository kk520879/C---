#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int sum = 0;
    int num;
    float average;

    printf("请输入10个数字：\n");

    // 循环读取10个数字，并计算它们的总和
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        sum += num;
    }

    // 计算平均值
    average = (float)sum / 10;

    printf("这10个数字的平均值是：%f\n", average);

    return 0;
}