// ʹ�ú���ʵ���������Ľ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
int test2() {
	int a = 0;
	int b = 0;

	printf("������������(�ÿո����):");
	scanf("%d %d", &a, &b);
	Swap(&a,&b);
	printf("������Ϊ:%d %d\n", a, b);
	
	system("pause");
	return 0;
}