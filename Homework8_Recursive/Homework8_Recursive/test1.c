//编写一个函数实现n^k，使用递归实现

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Function(int n, int k) {

	if (k == 0) {
		return 1;
	}
	else if (k == 1) {
		return n;
	}
	else {
		return n * Function(n, k - 1);
	}
}
int test1() {

	int n = 0;
	int k = 0;
	printf("请输入n^k中的n:\n");
	scanf("%d", &n);
	printf("请输入n^k中的k:\n");
	scanf("%d", &k);
	if (k < 0) {					//判断用户输入是否合法
		printf("您的输入有误!\n");
	}
	else {
		printf("%d\n", Function(n, k));
	}

	system("pause");
	return 0;
}