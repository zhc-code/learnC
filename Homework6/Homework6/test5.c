//ʵ��һ���������ж�һ�����ǲ�������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Judge() {
	int i = 0;
	scanf("%d", &i);
	int j = 2;
	for (j = 2; j < i; j++) {
		if (i%j == 0) {					//�� i = j ,�������Ҳ�����
			printf("%d��������!", i);
			break;
		}
		if (i == j + 1) {				//������iǰһ��������
			printf("%d������!", i);
		}
	}
}
int main() {

	int i = 0;
	printf("������һ������:");
	Judge(i);

	system("pause");
	return 0;
}