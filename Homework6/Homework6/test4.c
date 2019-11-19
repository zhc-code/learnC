//����һ�����飬ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص����á�

#include <stdio.h>
#include <stdlib.h>

void InitArray(int Array1[], int Array2[], int n) {
	int i = 0;
	for (; i < n; i++) {
		Array1[i] = Array2[i];
	}
}
void ClearArray(int Array1[], int n) {
	int i = 0;
	for (; i < n; i++) {
		Array1[i] = 0;
	}
}
void ReverseArray(int Array1[], int n) {
	int i = 0;
	int j = n - 1;
	for (; i < j; i++, j--) {
		int temp = Array1[i];
		Array1[i] = Array1[j];
		Array1[j] = temp;
	}
}
void PrintArray(int arr[], int n) {
	int i = 0;
	for (; i < n; i++) {
		printf("%d ", arr[i]);
	}
	putchar('\n');
}
int test4() {

	int arr_a[10];
	int arr_b[10] = { 1,2,3,4,5,6,7,8,9,10 };
	InitArray(arr_a, arr_b, 10);
	PrintArray(arr_a, 10);
	ReverseArray(arr_b, 10);
	PrintArray(arr_b, 10);
	ClearArray(arr_b, 10);            //�ȷ�ת�����  ����������ȫ��
	PrintArray(arr_b, 10);
	

	system("pause");
	return 0;
}