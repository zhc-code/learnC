//递归和非递归分别实现strlen
//非递归实现
#include <stdio.h>
#include <stdlib.h>

int str1(const char* arr) {

	int i = 0;
	while (*arr) {
		arr++;
		i++;
	}
	return i;
}
int test4() {
	char arr[] = "abed";
	printf("%d\n", str1(arr));

	system("pause");
	return 0;
}
//递归实现
int str2(char* arr) {
	
	if (*arr == '\0') {
		return 0;
	}
	else {
		return 1 + str2(arr + 1);
	}
}
int test42() {
	char arr[] = "abcd";
	printf("%d\n", str2(arr));

	system("pause");
	return 0;
}