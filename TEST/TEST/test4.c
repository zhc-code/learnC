//求出0～100000之间的所有“水仙花数”
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	
	int i = 0;
	printf("0~100000之间的水仙花数有:\n");
	for (i = 0; i < 100000; i++) {
		int a = i % 10;
		int b = (i / 10) % 10;
		int c = (i / 100) % 10;
		int d = (i / 1000) % 10;
		int e = (i / 10000) % 10;
		if (i < 10) {
			printf("%d\n", i);
		}
		else if ((10 <= i) && (i < 100) ) {
			if (pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2) + pow(e, 2) == i) {
				printf("%d\n", i);
			}
		}
		else if ((100 <= i) && (i < 1000)) {
			if (pow(a, 3) + pow(b, 3) + pow(c, 3) + pow(d, 3) + pow(e, 3) == i) {
				printf("%d\n", i);
			}
		}
		else if ((1000 <= i) && (i < 10000)) {
			if (pow(a, 4) + pow(b, 4) + pow(c, 4) + pow(d, 4) + pow(e, 4) == i) {
				printf("%d\n", i);
			}
		}
		else if ((10000 <= i) && (i < 100000)) {
			if (pow(a, 5) + pow(b, 5) + pow(c, 5) + pow(d, 5) + pow(e, 5) == i) {
				printf("%d\n", i);
			}
		}
	}
	system("pause");
	return 0;
}