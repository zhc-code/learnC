#define _CRT_SECURE_NO_WARNINGS
#define MAX_ROW 3
#define MAX_COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//编程思路:	1. 显示菜单界面
//			2. 判断用户选择
//			3. 进入游戏
//			4. 判断游戏结束条件
//			5. 结束游戏
int Menu() {
	int choice = 0;
	printf("===============================\n");
	printf("欢迎来到三子棋游戏!\n");
	printf("1. 开始游戏\n");
	printf("0. 退出游戏\n");
	printf("===============================\n");
	printf("请输入您的选择:");
	scanf("%d", &choice);
	return choice;
}
//棋盘初始化----将二维数组每个参数初始化为空格
void Init(char chessBoard[MAX_ROW][MAX_COL]) {	
	srand((unsigned int)time(0));
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			chessBoard[row][col] = ' ';
		}
	}
}
//玩家落子
void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]) {	
	int row = 0;
	int col = 0;
	printf("轮到玩家落子!\n");
	while (1) {
		printf("请输入要下位置的坐标(row col):\n");
		scanf("%d %d", &row, &col);
		//接下来对用户输入进行判定，看是否合法
		if (row < 0 || row >= MAX_ROW
			|| col < 0 || col >= MAX_COL) {
			printf("您的输入有误，请重新输入!\n");
			continue;
		}
		if (chessBoard[row][col] != ' ') {
			printf("该位置已经有子了，请重新输入!\n");
			continue;
		}
		chessBoard[row][col] = 'X';
		break;
	}	
}
//判定游戏是否结束
//1. 返回X表示玩家获胜
//2. 返回O表示电脑获胜
//3. 返回' '表示还未分出胜负
//4. 返回P表示和棋
char Check(char chessBoard[MAX_ROW][MAX_COL]) {
	//1. 检查所有的行，看是否有三个子连成一行的情况
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}
	//2. 检查所有的列，看是否有三个子连成一行的情况
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' ' 
			&& chessBoard[0][col] == chessBoard[1][col] 
			&& chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	//3. 检查两个对角线，看是否有三个子连成一行的情况
	if (chessBoard[0][0] != ' ' 
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' ' 
		&& chessBoard[0][2] == chessBoard[1][1] 
		&& chessBoard[0][2] == chessBoard[2][0]) {
		return chessBoard[0][2];
	}
	//判断棋盘是否下满
	if (IsFull(chessBoard)) {
		return 'P';
	}
	return ' ';
	
}
//判断棋盘是否满了，如果满了返回1，否则返回0
int IsFull(char chessBoard[MAX_ROW][MAX_COL]) {
	//查找棋盘是否有空位
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
void ComputerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("轮到电脑落子!\n");
	//设置0到2之间的随机数
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			continue;
		}
		chessBoard[row][col] = 'O';
		break;
	}
}
void Print(char chessBoard[MAX_ROW][MAX_COL]) {
	//打印棋盘内容
	printf("+---+---+---+---+\n");
	printf("|   | 0 | 1 | 2 |\n");
	for (int row = 0; row < MAX_ROW; row++) {
		
		printf("+---+---+---+---+\n");
		printf("| %d | %c | %c | %c |\n", row, chessBoard[row][0], 
			chessBoard[row][1], chessBoard[row][2]);
		}
	printf("+---+---+---+---+\n");
}
void Game() {
	int row = 0;
	int col = 0;
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	//1. 棋盘初始化
	Init(chessBoard);
	char winner = ' ';
	while (1) {
		//2. 打印初始的空棋盘
		Print(chessBoard);
		//3. 用户落子
		PlayerMove(chessBoard);

		//判定游戏是否结束(任意三个连成一行或所有格子下满则结束)
		winner = Check(chessBoard);
		if (winner != ' ') {
			break;
		}
		//电脑随机落子
		ComputerMove(chessBoard);
		//判定游戏是否结束
		winner = Check(chessBoard);
		if (winner != ' ') {
			break;
		}
	}
	//更新棋盘
	Print(chessBoard);
	if (winner == 'X') {
		printf("恭喜你!你赢了!\n");
	}
	else if (winner == 'O') {
		printf("你真菜!连电脑都下不过!\n");
	}
	else {
		printf("你真菜!你和电脑五五开!\n");
	}
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