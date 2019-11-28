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
	printf("2. 退出游戏\n");
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
			printf(" %c |", col);
		}
		printf("\n");
	}
	printf("+---+---+---+---+---+---+---+---+---+---+\n");
}
//将showMap初始化为全部*
void Init(char showMap[MAX_ROW][MAX_COL]) {
	srand((unsigned int)time(0));
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			showMap[MAX_ROW][MAX_COL] = '*';
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
void PlayerMove(char showMap[MAX_ROW][MAX_COL]) {
	int row = 0;
	int col = 0;
	while (1) {
		printf("请输入要翻开格子的坐标(row col):\n");
		scanf("%d %d", &row, &col);
		//尽量检查用户输入是否合法
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("您的输入有误!请重新输入!\n");
			continue;
		}
		showMap[row][col] = 'X';
		break;
	}
}
//判断用户是否踩雷,若踩雷则游戏结束,若没有,则统计该位置周围八个格子的地雷数量并返回值
void Check(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
	int row = 0;
	int col = 0;
	if (showMap[row][col] == mineMap[row][col]) {
		return 0;
	}
}
void Game() {
	//1. 设置两个地图, 一个给玩家看, 一个设置地雷布局(用两个二维数组实现)
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	Init(showMap);
	SetMine(mineMap);
	//2. 打印showMap给玩家看(用*显示)
	Print(showMap);
	//3. 提示玩家输入要翻开位置的坐标
	PlayerMove();
	
	//4. 判断玩家输入是否合法
	//5. 与mineMap对比, 判断该坐标位置是否有雷
	//6. 若该位置无雷, 则统计周围八个格子的地雷数量
	//7. 更新showMap, 显示玩家翻开位置周围格子附近地雷数量
	//8. 判断游戏是否结束(所有不是雷的格子均被翻开)
}