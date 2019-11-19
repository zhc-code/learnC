//实现一个函数，判断一个数是不是素数

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Judge() {
	int i = 0;
	scanf("%d", &i);
	int j = 2;
	for (j = 2; j < i; j++) {
		if (i%j == 0) {					//若 i = j ,则此条件也会成立
			printf("%d不是素数!", i);
			break;
		}
		if (i == j + 1) {				//遍历到i前一个数即可
			printf("%d是素数!", i);
		}
	}
}
int main() {

	int i = 0;
	printf("请输入一个整数:");
	Judge(i);

	system("pause");
	return 0;
}