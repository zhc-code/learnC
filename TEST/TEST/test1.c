//дһ��������ӡarr��������, ��ʹ�������±�, ʹ��ָ��

#include <stdio.h>
#include <stdlib.h>
void print(int* p) {
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(p + i));
	}
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print(arr);
	
	system("pause");
	return 0;
}