//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int(*p)[5];

	p = (int(*)[5])arr;

	for (int i = 0; i < 10; i++) {
		printf("%d ", *(*(p+0)+i));
	}

	system("pause");
	return 0;
}