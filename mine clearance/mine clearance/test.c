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
	printf("2. �˳���Ϸ\n");
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
			printf(" %c |", col);
		}
		printf("\n");
	}
	printf("+---+---+---+---+---+---+---+---+---+---+\n");
}
//��showMap��ʼ��Ϊȫ��*
void Init(char showMap[MAX_ROW][MAX_COL]) {
	srand((unsigned int)time(0));
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			showMap[MAX_ROW][MAX_COL] = '*';
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
void PlayerMove(char showMap[MAX_ROW][MAX_COL]) {
	int row = 0;
	int col = 0;
	while (1) {
		printf("������Ҫ�������ӵ�����(row col):\n");
		scanf("%d %d", &row, &col);
		//��������û������Ƿ�Ϸ�
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("������������!����������!\n");
			continue;
		}
		showMap[row][col] = 'X';
		break;
	}
}
//�ж��û��Ƿ����,����������Ϸ����,��û��,��ͳ�Ƹ�λ����Χ�˸����ӵĵ�������������ֵ
void Check(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
	int row = 0;
	int col = 0;
	if (showMap[row][col] == mineMap[row][col]) {
		return 0;
	}
}
void Game() {
	//1. ����������ͼ, һ������ҿ�, һ�����õ��ײ���(��������ά����ʵ��)
	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	Init(showMap);
	SetMine(mineMap);
	//2. ��ӡshowMap����ҿ�(��*��ʾ)
	Print(showMap);
	//3. ��ʾ�������Ҫ����λ�õ�����
	PlayerMove();
	
	//4. �ж���������Ƿ�Ϸ�
	//5. ��mineMap�Ա�, �жϸ�����λ���Ƿ�����
	//6. ����λ������, ��ͳ����Χ�˸����ӵĵ�������
	//7. ����showMap, ��ʾ��ҷ���λ����Χ���Ӹ�����������
	//8. �ж���Ϸ�Ƿ����(���в����׵ĸ��Ӿ�������)
}