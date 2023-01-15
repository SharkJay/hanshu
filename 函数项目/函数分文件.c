#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"math.h"//声明头文件

int main() {
	int a = 10;
	int b = 20;

	printf("加=%d\n",sum_math(a, b));
	printf("减=%d\n", sub_math(a, b));
	printf("乘=%d\n", mul_math(a, b));
	printf("除=%d\n", div_math(a, b));
	printf("最大值=%d\n", max_math(a, b));
	printf("最小值=%d\n", min_math(a, b));

	system("pause");
	return 0;

}