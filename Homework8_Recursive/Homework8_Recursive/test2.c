//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n) {
	
	if (n == 0) {
		return 0;
	}
	else {
		return n % 10 + DigitSum(n / 10);
	}
}
int test2() {

	printf("请输入一个非负整数:\n");
	int n = 0;
	scanf("%d", &n);
	if (n < 0) {
		printf("您的输入有误!\n");
	}
	else {
		printf("结果是:%d\n", DigitSum(n));
	}

	system("pause");
	return 0;
}