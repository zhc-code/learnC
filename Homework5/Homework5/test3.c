//��д����ģ��������������ĳ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int password = 123456;				//�趨����
	int i = 0;
	for ( i = 0; i < 3; i++) {			//���Գ�������
		printf("����������:");
		int try = 0;
		scanf("%d", &try);
		if (try == password) {
			printf("��½�ɹ�!\n");
			break;					//������ȷ������ѭ��
		}
		else {
			if (i < 2) {			//�ж��Ƿ�Ϊ���������
				printf("�������,������!\n");
			}
		}
	}
	if (i == 3) {
		printf("���������������,����ǿ���˳�!\n");
	}
	system("pause");
	return 0;
}
