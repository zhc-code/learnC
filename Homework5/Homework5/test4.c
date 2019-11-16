#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {

	printf("请输入一个字符(大小写字母或数字):");
	char ch ;
	while (1) {
		scanf("%c", &ch);
		if ((65 <= ch) && (ch < 91)) {
			ch += 32;
			printf("%c\n", ch);
		}
		else if ((97 <= ch) && (ch < 123)) {
			ch -= 32;
			printf("%c\n", ch);
		}
		else if ((48 <= ch) && (ch < 58));
	}
	system("pause");
}