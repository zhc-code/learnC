//��������Ϸ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Game() {
	int toGuess = rand() % 100 + 1;				//����һ�������
	while (1) {
		printf("������һ������(1-100):");
		int num = 0;
		scanf("%d", &num);
		if (num < toGuess) {
			printf("�µ���!\n");
		}
		else if (num > toGuess) {
			printf("�¸���!\n");
		}
		else if (num == toGuess) {
			printf("��ϲ��!�¶���!\n");
			break;
		}
	}
}
int menu() {
	printf("********������********\n");			//���û�����
	printf("1. ��ʼ��Ϸ\n");
	printf("0. �˳�����\n");
	printf("����������ѡ��: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main() {
	srand((unsigned int) time(0));				//ѡ��ʱ����������� ��������Ը���
	while (1) {							//unsigned int >> ǿ������ת��
		int choice = menu();
		if (choice == 1) {
			Game();
		}
		else {
			printf("�ټ�!\n");
			break;
		}
	}
	system("pause");
}
