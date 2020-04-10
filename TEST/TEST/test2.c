//写一个函数，可以逆序一个字符串
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse(str) {
	char* p = str;
	int size = strlen(str);
	int a = size / 2;
	for (int i = 0; i < a; i++) {
		int tmp = *(p + i);
		*(p + i) = *(p + size - 1 - i);
		*(p + size - 1 - i) = tmp;
	}
	for (int j = 0; j < size; j++) {
		printf("%c", *(p + j));
	}
}

int main()
{
	char str[] = "hello bit";
	Reverse(str);

	system("pause");
	return 0;
}