//求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。

#include <stdio.h>
#include <stdlib.h>

int test2() {

	int i = 100;
	printf("0~999中的水仙花数有:\n");
	for (i = 100; i < 1000; i++) {
		int a = i % 10;
		int b = (i / 10) % 10;
		int c = (i / 100) % 10;
		if (i == a * a * a + b * b * b + c * c * c) {		//不要再把赋值当等号了!!!三次了!!!
			printf("%d\n", i);
		}
		continue;
	}
	
	system("pause");
	return 0;
}