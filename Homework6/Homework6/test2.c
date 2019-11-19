// 使用函数实现两个数的交换
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
int test2() {
	int a = 0;
	int b = 0;

	printf("请输入两个数(用空格隔开):");
	scanf("%d %d", &a, &b);
	Swap(&a,&b);
	printf("交换后为:%d %d\n", a, b);
	
	system("pause");
	return 0;
}