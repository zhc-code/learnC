//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Print(n) {
	if (n < 10) {
		printf("%d ", n);
	}
	else {
		Print(n / 10);
		printf("%d ", n % 10);
	}
}

int test6() {

	printf("������һ������:\n");
	int n = 0;
	scanf("%d", &n);
	if (n < 0) {
		printf("������������!\n");
	}
	else {
		Print(n);
	}

	system("pause");
	return 0;
}
