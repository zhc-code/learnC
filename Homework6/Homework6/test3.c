//ʵ��һ�������ж�year�ǲ�������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Judge() {
	
	int x ;
// 	printf("������һ�����:");
// 	scanf("%d", &x);*/
	if (x % 400 = 0) {
		printf("%d������������\n", x);
	}
	else if ((x % 4 = 0) && (x % 100 != 0)) {
		printf("%d������ͨ����\n", x);
	}
	else {
		printf("%d�겻������!", x);
	}
}
int main() {
	
	
	printf("������һ�����:"--);
	scanf("%d", &x);
	Judge();

	system("pause");
	return 0;
}