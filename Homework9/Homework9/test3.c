//打印杨辉三角
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int arr[100][100] = { 0 };		//用二维数组表示表格
	int row = 5;
	printf("请输入行数n:");
	scanf("%d", &row);
	int i = 0;
	int j = 0;
	arr[0][0] = 1;
	for (i = 1; i < row; i++) {		//将杨辉三角值赋给二维数组
		arr[i][0] = 1;
		for ( j = 1; j <= i; j++) {
			arr[i][j] = arr[i -1][j - 1] + arr[i - 1][j];
			
		}
	}
	for (i = 0; i < row; i++) {		//打印二维数组(杨辉三角)
		for (j = 0; j <= i; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}