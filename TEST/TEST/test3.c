#include <stdio.h>
#include <stdlib.h>

int main() {

	int row = 13;
	int col = 13;
	for (int i = 1; i <= row; i++) {
		if (i < (row / 2) + 1) {
			for (int j = 1; j < col; j++) {
				if (j >= (col + 1) / 2 - (i - 1) &&
					j <= (col + 1) / 2 + (i - 1)) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		else {
			for (int j = 1; j <= col; j++) {
				if (j >= (col + 1) / 2 - (row - i) &&
					j <= (col + 1) / 2 + (row - i)) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}