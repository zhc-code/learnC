//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

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