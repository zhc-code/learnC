#include <stdio.h>
#include <stdlib.h>

void PrintArray(int arr[], int n) {		//打印数组函数
	int i = 0;
	for (; i < n; i++) {
		printf("%d", arr[i]);
	}
	putchar('\n');
}

void Swap(int* x, int* y) {				//交换两个数字的函数
	int temp = *x;
	*x = *y;
	*y = temp;
}
void Bubblesort(int* arr, int n) {		//冒泡排序函数

	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < n - 1; i++) {		
		for (j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				Swap(&arr[j], &arr[j + 1]);
			}
		}
	}
	PrintArray(arr,n);
}

int main() {

	int arr[] = { 1,9,2,7,4 };
	Bubblesort(arr, 5);

	system("pause");
	return 0;
}