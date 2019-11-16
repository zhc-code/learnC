//求两个数的最大公约数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int a, b, i;
	scanf("%d %d", &a, &b);
	if (a > b) {
		i = b;
	}
	else {
		i = a;
	}
	for (; i > 0; i--) {
		if ((a%i == 0)&&(b%i == 0)) {
			printf("%d\n", i);
			break;                   //从大往小查,可同时整除两个数则跳出循环
		}
	}

	system("pause");
	return 0;
}