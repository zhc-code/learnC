////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main() {
//	
//	float sum = 0;
//	int i = 1;
//	for (; i < 101; i++) {
//		sum += pow((-1), i+1) / i;			//pow函数_计算一个数的n次方
//	}
//	printf("sum = %f\n", sum);
//
//	system("pause");
//	return 0;
//}