//�ǵݹ�ʵ�����n��쳲�������
//쳲�����������ָǰ����Ϊ1,�ӵ����ʼ,ÿһ�����ǰ����֮�͵�����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 0;
	int a = 1;
	int b = 1;
	int c = 0;
	int n = 0;
	printf("����������ĵ�n��쳲�������: ");
	scanf("%d", &n);
	if ((n < 3) && (n > 0)) {
		printf("��%d��쳲�������Ϊ: %d\n", n, a);
	}
	else if (n <= 0) {
		printf("������������!\n");
	}
	else {
		for (i = 2; i < n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		printf("��%d��쳲�������Ϊ:%d\n", n, c);
	}

	system("pause");
	return 0;
}