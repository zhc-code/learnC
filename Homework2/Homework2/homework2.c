//��ӡ100~200 ֮�������

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	

int main() {
		int i, j;
		printf("100-200֮�����������Ϊ:\n");
		for (i = 100; i <= 200; i++) {
			for (j = 2; j < i; j++) {
				if (i%j == 0) {
					break;
				}
			}
			if (i == j) {
				printf("%d\n", i);
			}
		}
	system("pause");
	return 0;
}
