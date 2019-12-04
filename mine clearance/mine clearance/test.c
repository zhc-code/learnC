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
	printf("��ӭ����ɨ����Ϸ!\n");
	printf("1. ��ʼ��Ϸ\n");
	printf("0. �˳���Ϸ\n");
	printf("======================\n");
	printf("����������ѡ��:\n");
	scanf("%d", &choice);
	return choice;
}
//��ӡshowMap
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
//��showMap��ʼ��Ϊȫ��*  ��mineMap��ʼ��Ϊȫ0
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
//����0~8����������õ���,��'X'��ʾ����
void SetMine(char mineMap[MAX_ROW][MAX_COL]) {
	int count = COUNT;
	while (count > 0) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		//�жϸ�λ���Ƿ��Ѿ�����,������,���������һ��λ��
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
		printf("������Ҫ�������ӵ�����(row col)(�ÿո����,�س�ȷ��):\n");
		scanf("%d %d", &row, &col);
		//��������û������Ƿ�Ϸ�
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("������������!����������!\n");
			continue;
		}
		//�ж��û������λ���Ƿ��Ѿ�����
		else if (showMap[row][col] != '*') {
			printf("��������Ѿ�����,����������!\n");
			continue;
		}
		else {
			showMap[row][col] = 'X';
		}
		//����Ƿ���� 
		char showNum = '0';
		//PlayerMove(showMap[row][col]);		//���û����봫������mineMap�Ա�
		if (showMap[row][col] == mineMap[row][col]) {
			return 0;
			break;
		}
		else {			//������λ����Χ�˸�����,������Χ�����������ڵ�ͼ�ϸ�λ����ʾ
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
//�ж��û��Ƿ����,����������Ϸ����,��û��,��ͳ�Ƹ�λ����Χ�˸����ӵĵ�������������ֵ
//int Check(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
//	int row = 0;
//	int col = 0;
//	int showNum = 0;
//	//PlayerMove(showMap[row][col]);		//���û����봫������mineMap�Ա�
//	if (PlayerMove(showMap) == mineMap[row][col]) {
//		return 0;
//	}
//	else {			//������λ����Χ�˸�����,������Χ�����������ڵ�ͼ�ϸ�λ����ʾ
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
//��Ϸʤ������:��ҽ����в����׵ĸ��Ӷ�������ʤ��
void Winner(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
	int countMine = COUNT;
	int win = PlayerCheck(showMap, mineMap);
	if (win == 0) {
		Print(showMap);
		printf("�������!��Ϸʧ��!\n");
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
		printf("��ϲ��!��Ӯ��!\n");
	}
}
void Game() {
	//1. ����������ͼ, һ������ҿ�, һ�����õ��ײ���(��������ά����ʵ��)
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	Init(showMap, mineMap);
	SetMine(mineMap);
	//2. ��ӡshowMap����ҿ�(��*��ʾ)
	Print(showMap);
	//3. ��ʾ�������Ҫ����λ�õ����겢�ж���������Ƿ�Ϸ�
	PlayerCheck(showMap, mineMap);
	//4. ��mineMap�Ա�, �жϸ�����λ���Ƿ�����.����λ������, ��ͳ����Χ�˸����ӵĵ�������
	//Check(showMap, mineMap);
	//5. �ж���Ϸ�Ƿ����(���в����׵ĸ��Ӿ�������)
	Winner(showMap, mineMap);
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