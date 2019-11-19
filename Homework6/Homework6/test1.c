//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Function(i) {
	int x = 1;
	int y = 1;
	for (y = 1; y <= i; y++) {
		for (x = 1; x <= y; x++) {
			int z = x * y;
			printf("%d*%d=%d ", x, y, z);
		}if (x = y) {
			printf("\n");
		}
	}
}
int test1() {
	printf("请输入需要打印的乘法口诀表:");
	int i = 0;
	scanf("%d", &i);
	Function(i);

	system("pause");
	return 0;
}