//非递归实现求第n个斐波那契数
//斐波那契数列是指前两项为1,从第三项开始,每一项都等于前两项之和的数列

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 0;
	int a = 1;
	int b = 1;
	int c = 0;
	int n = 0;
	printf("请输入想求的第n个斐波那契数: ");
	scanf("%d", &n);
	if ((n < 3) && (n > 0)) {
		printf("第%d个斐波那契数为: %d\n", n, a);
	}
	else if (n <= 0) {
		printf("您的输入有误!\n");
	}
	else {
		for (i = 2; i < n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		printf("第%d个斐波那契数为:%d\n", n, c);
	}

	system("pause");
	return 0;
}