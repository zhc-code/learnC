//ʵ��һ�������ж�year�ǲ�������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Judgelpy() {
	
	int x = 0;
	scanf("%d", &x);
	if (x % 400 == 0) {
		printf("%d������������\n", x);
	}
	else if ((x % 4 == 0) && (x % 100 != 0)) {
		printf("%d������ͨ����\n", x);
	}
	else {
		printf("%d�겻������!", x);
	}
}
int test3() {
	
	printf("������һ�����:");
	Judgelpy();

	system("pause");
	return 0;
}