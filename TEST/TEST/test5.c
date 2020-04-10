//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("请输入一个个位数:\n");
	int a = 0;
	scanf("%d", &a);
	int b = a * 10 + a;
	int c = b * 10 + a;
	int d = c * 10 + a;
	int e = d * 10 + a;
	int Sn = a + b + c + d + e;
	printf("Sn = %d\n", Sn);

	system("pause");
	return 0;
}