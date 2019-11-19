//实现一个函数判断year是不是润年

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Judgelpy() {
	
	int x = 0;
	scanf("%d", &x);
	if (x % 400 == 0) {
		printf("%d年是世纪闰年\n", x);
	}
	else if ((x % 4 == 0) && (x % 100 != 0)) {
		printf("%d年是普通闰年\n", x);
	}
	else {
		printf("%d年不是闰年!", x);
	}
}
int test3() {
	
	printf("请输入一个年份:");
	Judgelpy();

	system("pause");
	return 0;
}