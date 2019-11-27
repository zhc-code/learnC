#define _CRT_SECURE_NO_WARNINGS
#define MAX_ROW 3
#define MAX_COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//���˼·:	1. ��ʾ�˵�����
//			2. �ж��û�ѡ��
//			3. ������Ϸ
//			4. �ж���Ϸ��������
//			5. ������Ϸ
int Menu() {
	int choice = 0;
	printf("===============================\n");
	printf("��ӭ������������Ϸ!\n");
	printf("1. ��ʼ��Ϸ\n");
	printf("0. �˳���Ϸ\n");
	printf("===============================\n");
	printf("����������ѡ��:");
	scanf("%d", &choice);
	return choice;
}
//���̳�ʼ��----����ά����ÿ��������ʼ��Ϊ�ո�
void Init(char chessBoard[MAX_ROW][MAX_COL]) {	
	srand((unsigned int)time(0));
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			chessBoard[row][col] = ' ';
		}
	}
}
//�������
void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]) {	
	int row = 0;
	int col = 0;
	printf("�ֵ��������!\n");
	while (1) {
		printf("������Ҫ��λ�õ�����(row col):\n");
		scanf("%d %d", &row, &col);
		//���������û���������ж������Ƿ�Ϸ�
		if (row < 0 || row >= MAX_ROW
			|| col < 0 || col >= MAX_COL) {
			printf("����������������������!\n");
			continue;
		}
		if (chessBoard[row][col] != ' ') {
			printf("��λ���Ѿ������ˣ�����������!\n");
			continue;
		}
		chessBoard[row][col] = 'X';
		break;
	}	
}
//�ж���Ϸ�Ƿ����
//1. ����X��ʾ��һ�ʤ
//2. ����O��ʾ���Ի�ʤ
//3. ����' '��ʾ��δ�ֳ�ʤ��
//4. ����P��ʾ����
char Check(char chessBoard[MAX_ROW][MAX_COL]) {
	//1. ������е��У����Ƿ�������������һ�е����
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}
	//2. ������е��У����Ƿ�������������һ�е����
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' ' 
			&& chessBoard[0][col] == chessBoard[1][col] 
			&& chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	//3. ��������Խ��ߣ����Ƿ�������������һ�е����
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
	//�ж������Ƿ�����
	if (IsFull(chessBoard)) {
		return 'P';
	}
	return ' ';
	
}
//�ж������Ƿ����ˣ�������˷���1�����򷵻�0
int IsFull(char chessBoard[MAX_ROW][MAX_COL]) {
	//���������Ƿ��п�λ
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
	printf("�ֵ���������!\n");
	//����0��2֮��������
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
	//��ӡ��������
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
	//1. ���̳�ʼ��
	Init(chessBoard);
	char winner = ' ';
	while (1) {
		//2. ��ӡ��ʼ�Ŀ�����
		Print(chessBoard);
		//3. �û�����
		PlayerMove(chessBoard);

		//�ж���Ϸ�Ƿ����(������������һ�л����и������������)
		winner = Check(chessBoard);
		if (winner != ' ') {
			break;
		}
		//�����������
		ComputerMove(chessBoard);
		//�ж���Ϸ�Ƿ����
		winner = Check(chessBoard);
		if (winner != ' ') {
			break;
		}
	}
	//��������
	Print(chessBoard);
	if (winner == 'X') {
		printf("��ϲ��!��Ӯ��!\n");
	}
	else if (winner == 'O') {
		printf("�����!�����Զ��²���!\n");
	}
	else {
		printf("�����!��͵������忪!\n");
	}
}

int main() {
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0) {
			printf("�ټ�!\n");
			break;
		}
		else {
			printf("������������!\n");
		}
	}

	system("pause");
	return 0;
}