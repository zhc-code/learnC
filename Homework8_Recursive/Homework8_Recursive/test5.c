//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�ǵݹ�ʵ��
int test5_1() {			

	printf("������һ������:\n");
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int sum = 1;
	for (i = 1; i <=n; i++) {
		sum *= i;
	}
	printf("%d�Ľ׳���:%d\n", n, sum);

	system("pause");
	return 0;
}

//�ǵݹ�ʵ��
int Fact(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * Fact(n - 1);
	}
}
int test5() {

	printf("������һ������:\n");
	int n = 0;
	scanf("%d", &n);
	if (n < 1) {
		printf("������������!\n");
	}
	else {
		printf("%d�Ľ׳���:%d\n", n, Fact(n));
	}

	system("pause");
	return 0;
}