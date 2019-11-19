//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 0;
	printf("请输入一个个位数:");
	scanf("%d", &i);
	int a = i * 10 + i;
	int b = i * 100 + a;
	int c = i * 1000 + b;
	int d = i * 10000 + c;
	int sum = a + b + c + d + i;
	printf("Sn的结果是:%d", sum);
	printf("\n");

	system("pause");
	return 0;
}