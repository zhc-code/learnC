//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Function(int n, int k) {

	if (k == 0) {
		return 1;
	}
	else if (k == 1) {
		return n;
	}
	else {
		return n * Function(n, k - 1);
	}
}
int test1() {

	int n = 0;
	int k = 0;
	printf("������n^k�е�n:\n");
	scanf("%d", &n);
	printf("������n^k�е�k:\n");
	scanf("%d", &k);
	if (k < 0) {					//�ж��û������Ƿ�Ϸ�
		printf("������������!\n");
	}
	else {
		printf("%d\n", Function(n, k));
	}

	system("pause");
	return 0;
}