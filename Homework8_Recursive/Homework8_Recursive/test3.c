//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。

#include <stdio.h>
#include <stdlib.h>

int Reverse_string(char* string) {
	if (*string == '\0') {
		return 0;
	}
	else {
		Reverse_string(string + 1);
		printf("%c", *string);
	}
}
int main() {
	char arr[] = "asdfgh";
	Reverse_string(arr);

	system("pause");
	return 0;
}