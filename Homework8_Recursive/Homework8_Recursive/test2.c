//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n) {
	
	if (n == 0) {
		return 0;
	}
	else {
		return n % 10 + DigitSum(n / 10);
	}
}
int test2() {

	printf("������һ���Ǹ�����:\n");
	int n = 0;
	scanf("%d", &n);
	if (n < 0) {
		printf("������������!\n");
	}
	else {
		printf("�����:%d\n", DigitSum(n));
	}

	system("pause");
	return 0;
}