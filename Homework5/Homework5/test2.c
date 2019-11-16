//在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("请输入想要查找的数字: ");
	int i = 0;
	scanf("%d", &i);
	int left = arr[0];
	int right = arr[9];
	while(left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] == i) {
			printf("恭喜你,找到啦!下标是:%d\n",mid);
			break;
		}
		else if (arr[mid] <= i) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	if (right < left) {			//判断是否找到,防止重复打印-1
		printf("-1\n");
	}
	system("pause");
	return 0;
}