//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 0;
	printf("������һ����λ��:");
	scanf("%d", &i);
	int a = i * 10 + i;
	int b = i * 100 + a;
	int c = i * 1000 + b;
	int d = i * 10000 + c;
	int sum = a + b + c + d + i;
	printf("Sn�Ľ����:%d", sum);
	printf("\n");

	system("pause");
	return 0;
}