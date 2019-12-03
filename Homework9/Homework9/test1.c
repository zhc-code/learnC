#include <stdio.h>
#include <stdlib.h>
//思路: 遍历每种情况,看哪种符合每位选手都说对了一半这个条件
int test1() {
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	int e = 1;
	for (a = 1; a <= 5; a++) {
		for (b = 1; b <= 5; b++) {
			for (c = 1; c <= 5; c++) {
				for (d = 1; d <= 5; d++) {
					for (e = 1; e <= 5; e++) {
						if ((b == 2 || a == 3) && ((b == 2) != (a == 3))	//判断是否满足每个人说对一半的条件
							&& (b == 2 || e == 4) && ((b == 2) != (e == 4))
							&& (c == 1 || d == 2) && ((c == 1) != (d == 2)) 
							&& (c == 5 || d == 3) && ((c == 5) != (d == 3))
							&& (e == 4 || a == 1) && ((e == 4) != (a == 1)) == 1) {
							if (a * b * c * d * e == 120) {				//判断abcde是否重复
								printf("比赛名次为:\nA第%d\nB第%d\nC第%d\nD第%d\nE第%d\n", a, b, c, d, e);
							}
						}	
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}