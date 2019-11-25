//递归实现求第n个斐波那契数
//斐波那契数列是指前两项为1,从第三项开始,每一项都等于前两项之和的数列

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Fib(int n) {

	if (n == 1 || n == 2) {
		return 1;
		}
	else {
		return Fib(n - 1) + Fib(n - 2);
	}
}
int main() {

	int i = 0;
	printf("请输入想求的第n个斐波那契数:");
	scanf("%d", &i);
	if (i <= 0) {
		printf("您的输入有误!\n");				//判断用户输入是否合法
	}
	else {
		Fib(i);					//进入递归
	}
	printf("第%d个斐波那契数为:%d\n", i, Fib(i));
		
	system("pause");
	return 0;
}