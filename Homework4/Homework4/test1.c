////������A�е����ݺ�����B�е����ݽ��н���������һ����
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//	int i = 0;
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 11,12,13,14,15 };
//	printf("����ǰ����A:\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr1[i]);
//		}
//	printf("\n����ǰ����B:\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr2[i]);
//	}
//	for (i = 0; i < 5; i++) {				//��������ÿ��Ԫ�طֱ𽻻�
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	printf("\n����������A:\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr1[i]);
//	}
//	printf("\n����������B:\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr2[i]);
//	}
//
//	system("pause");
//	return 0;
//}