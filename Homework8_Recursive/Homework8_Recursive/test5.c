//递归和非递归分别实现求n的阶乘

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//非递归实现
int test5_1() {			

	printf("请输入一个整数:\n");
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int sum = 1;
	for (i = 1; i <=n; i++) {
		sum *= i;
	}
	printf("%d的阶乘是:%d\n", n, sum);

	system("pause");
	return 0;
}

//非递归实现
int Fact(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * Fact(n - 1);
	}
}
int test5() {

	printf("请输入一个整数:\n");
	int n = 0;
	scanf("%d", &n);
	if (n < 1) {
		printf("您的输入有误!\n");
	}
	else {
		printf("%d的阶乘是:%d\n", n, Fact(n));
	}

	system("pause");
	return 0;
}