//�������������Լ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int a, b, i;
	scanf("%d %d", &a, &b);
	if (a > b) {
		i = b;
	}
	else {
		i = a;
	}
	for (; i > 0; i--) {
		if ((a%i == 0)&&(b%i == 0)) {
			printf("%d\n", i);
			break;                   //�Ӵ���С��,��ͬʱ����������������ѭ��
		}
	}

	system("pause");
	return 0;
}