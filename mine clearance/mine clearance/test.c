#define _CRT_SECURE_NO_WARNINGS
#define MAX_ROW 9
#define MAX_COL	9
#define COUNT 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Menu() {
	int choice = 0;
	printf("======================\n");
	printf("欢迎来到扫雷游戏!\n");
	printf("1. 开始游戏\n");
	printf("0. 退出游戏\n");
	printf("======================\n");
	printf("请输入您的选择:\n");
	scanf("%d", &choice);
	return choice;
}
//打印showMap
void Print(char showMap[MAX_ROW][MAX_COL]) {
	int row = 0;
	int col = 0;
	printf("+---+---+---+---+---+---+---+---+---+---+\n");
	printf("|   | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |\n");
	for (row = 0; row < MAX_ROW; row++) {
		printf("+---+---+---+---+---+---+---+---+---+---+\n");
		printf("| %d |", row);
		for (col = 0; col < MAX_COL; col++) {
			printf(" %c |", showMap[row][col]);
		}
		printf("\n");
	}
	printf("+---+---+---+---+---+---+---+---+---+---+\n");
}
//将showMap初始化为全部*  将mineMap初始化为全0
void Init(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
	srand((unsigned int)time(0));
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			showMap[row][col] = '*';
		}
	}
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			mineMap[row][col] = '0';
		}
	}
}
//利用0~8的随机数设置地雷,用'X'表示地雷
void SetMine(char mineMap[MAX_ROW][MAX_COL]) {
	int count = COUNT;
	while (count > 0) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		//判断该位置是否已经有雷,若有雷,则重新随机一个位置
		if (mineMap[row][col] == 'X') {
			continue;
		}
		mineMap[row][col] = 'X';
		count--;
	}
}
int PlayerCheck(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
	int row = 0;
	int col = 0;
	while (1) {
		printf("请输入要翻开格子的坐标(row col)(用空格隔开,回车确定):\n");
		scanf("%d %d", &row, &col);
		//尽量检查用户输入是否合法
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("您的输入有误!请重新输入!\n");
			continue;
		}
		//判断用户输入的位置是否已经翻开
		else if (showMap[row][col] != '*') {
			printf("这个格子已经翻开,请重新输入!\n");
			continue;
		}
		else {
			showMap[row][col] = 'X';
		}
		//检查是否踩雷 
		char showNum = '0';
		//PlayerMove(showMap[row][col]);		//将用户输入传进来与mineMap对比
		if (showMap[row][col] == mineMap[row][col]) {
			return 0;
			break;
		}
		else {			//遍历该位置周围八个格子,计算周围地雷数量并在地图上该位置显示
			for (int i = row - 1; i <= row + 1; i++) {
				for (int j = col - 1; j <= col + 1; j++) {
					if (mineMap[i][j] == 'X') {
						showNum++;
					}
				}
			}
			showMap[row][col] = showNum;
			Print(showMap);
		}
	}
}
//判断用户是否踩雷,若踩雷则游戏结束,若没有,则统计该位置周围八个格子的地雷数量并返回值
//int Check(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
//	int row = 0;
//	int col = 0;
//	int showNum = 0;
//	//PlayerMove(showMap[row][col]);		//将用户输入传进来与mineMap对比
//	if (PlayerMove(showMap) == mineMap[row][col]) {
//		return 0;
//	}
//	else {			//遍历该位置周围八个格子,计算周围地雷数量并在地图上该位置显示
//		for (int i = row - 1; i <= row + 1; i++) {		
//			for (int j = col - 1; j <= col + 1; j++) {
//				if (mineMap[i][j] == 'X') {
//					showNum++;
//				}
//			}
//		}
//		showMap[row][col] = showNum;
//		Print(showMap);
//	}
//
//}
//游戏胜利条件:玩家将所有不是雷的格子都翻开则胜利
void Winner(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
	int countMine = COUNT;
	int win = PlayerCheck(showMap, mineMap);
	if (win == 0) {
		Print(showMap);
		printf("你踩雷了!游戏失败!\n");
	}
	else {
		Print(showMap);
		for (int i = 0; i < MAX_ROW; i++) {
			for (int j = 0; j < MAX_COL; j++) {
				if (showMap[i][j] == '*' && mineMap[i][j] == 'X') {
					countMine--;
				}
			}
		}
	}
	if (countMine == 0) {
		printf("恭喜你!你赢啦!\n");
	}
}
void Game() {
	//1. 设置两个地图, 一个给玩家看, 一个设置地雷布局(用两个二维数组实现)
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	Init(showMap, mineMap);
	SetMine(mineMap);
	//2. 打印showMap给玩家看(用*显示)
	Print(showMap);
	//3. 提示玩家输入要翻开位置的坐标并判断玩家输入是否合法
	PlayerCheck(showMap, mineMap);
	//4. 与mineMap对比, 判断该坐标位置是否有雷.若该位置无雷, 则统计周围八个格子的地雷数量
	//Check(showMap, mineMap);
	//5. 判断游戏是否结束(所有不是雷的格子均被翻开)
	Winner(showMap, mineMap);
}
int main() {
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0) {
			printf("再见!\n");
			break;
		}
		else {
			printf("您的输入有误!\n");
		}
	}

	system("pause");
	return 0;
}