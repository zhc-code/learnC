//���������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("��������Ҫ���ҵ�����: ");
	int i = 0;
	scanf("%d", &i);
	int left = arr[0];
	int right = arr[9];
	while(left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] == i) {
			printf("��ϲ��,�ҵ���!�±���:%d\n",mid);
			break;
		}
		else if (arr[mid] <= i) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	if (right < left) {			//�ж��Ƿ��ҵ�,��ֹ�ظ���ӡ-1
		printf("-1\n");
	}
	system("pause");
	return 0;
}