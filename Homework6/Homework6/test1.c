//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Function(i) {
	int x = 1;
	int y = 1;
	for (y = 1; y <= i; y++) {
		for (x = 1; x <= y; x++) {
			int z = x * y;
			printf("%d*%d=%d ", x, y, z);
		}if (x = y) {
			printf("\n");
		}
	}
}
int test1() {
	printf("��������Ҫ��ӡ�ĳ˷��ھ���:");
	int i = 0;
	scanf("%d", &i);
	Function(i);

	system("pause");
	return 0;
}