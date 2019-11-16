//编写代码模拟三次密码输入的场景

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int password = 123456;				//设定密码
	int i = 0;
	for ( i = 0; i < 3; i++) {			//可以尝试三次
		printf("请输入密码:");
		int try = 0;
		scanf("%d", &try);
		if (try == password) {
			printf("登陆成功!\n");
			break;					//输入正确则跳出循环
		}
		else {
			if (i < 2) {			//判断是否为第三次输错
				printf("输入错误,请重试!\n");
			}
		}
	}
	if (i == 3) {
		printf("您已输入错误三次,程序强制退出!\n");
	}
	system("pause");
	return 0;
}
