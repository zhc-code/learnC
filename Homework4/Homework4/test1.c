////将数组A中的内容和数组B中的内容进行交换（数组一样大）
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//	int i = 0;
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 11,12,13,14,15 };
//	printf("交换前数组A:\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr1[i]);
//		}
//	printf("\n交换前数组B:\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr2[i]);
//	}
//	for (i = 0; i < 5; i++) {				//将数组中每个元素分别交换
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	printf("\n交换后数组A:\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr1[i]);
//	}
//	printf("\n交换后数组B:\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr2[i]);
//	}
//
//	system("pause");
//	return 0;
//}