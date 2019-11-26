//递归方式实现打印一个整数的每一位

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Print(n) {
	if (n < 10) {
		printf("%d ", n);
	}
	else {
		Print(n / 10);
		printf("%d ", n % 10);
	}
}

int test6() {

	printf("请输入一个整数:\n");
	int n = 0;
	scanf("%d", &n);
	if (n < 0) {
		printf("您的输入有误!\n");
	}
	else {
		Print(n);
	}

	system("pause");
	return 0;
}
