//猜数字游戏

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Game() {
	int toGuess = rand() % 100 + 1;				//生成一个随机数
	while (1) {
		printf("请输入一个整数(1-100):");
		int num = 0;
		scanf("%d", &num);
		if (num < toGuess) {
			printf("猜低了!\n");
		}
		else if (num > toGuess) {
			printf("猜高了!\n");
		}
		else if (num == toGuess) {
			printf("恭喜你!猜对啦!\n");
			break;
		}
	}
}
int menu() {
	printf("********猜数字********\n");			//与用户交互
	printf("1. 开始游戏\n");
	printf("0. 退出程序\n");
	printf("请输入您的选择: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main() {
	srand((unsigned int) time(0));				//选择时间生成随机数 这样随机性更高
	while (1) {							//unsigned int >> 强制类型转换
		int choice = menu();
		if (choice == 1) {
			Game();
		}
		else {
			printf("再见!\n");
			break;
		}
	}
	system("pause");
}
