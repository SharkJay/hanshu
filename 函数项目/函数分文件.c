#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"math.h"//����ͷ�ļ�

int main() {
	int a = 10;
	int b = 20;

	printf("��=%d\n",sum_math(a, b));
	printf("��=%d\n", sub_math(a, b));
	printf("��=%d\n", mul_math(a, b));
	printf("��=%d\n", div_math(a, b));
	printf("���ֵ=%d\n", max_math(a, b));
	printf("��Сֵ=%d\n", min_math(a, b));

	system("pause");
	return 0;

}