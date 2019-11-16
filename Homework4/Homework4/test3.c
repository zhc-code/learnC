//编写程序数一下 1到 100 的所有整数中出现多少次数字9

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 1;
	int j = 0;
	for (; i < 101; i++) {
		if (i % 10 == 9 && i % 9 == 0 && i > 10) {			//列出99这个特殊情况
			j += 2;
		}
		else if (i % 10 == 9) {
			j++;
		}
	}
	printf("1到100的所有整数中9一共出现的次数是%d次\n", j);
	system("pause");
	return 0;
}