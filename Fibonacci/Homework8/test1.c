//�ݹ�ʵ�����n��쳲�������
//쳲�����������ָǰ����Ϊ1,�ӵ����ʼ,ÿһ�����ǰ����֮�͵�����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Fib(int n) {

	if (n == 1 || n == 2) {
		return 1;
		}
	else {
		return Fib(n - 1) + Fib(n - 2);
	}
}
int main() {

	int i = 0;
	printf("����������ĵ�n��쳲�������:");
	scanf("%d", &i);
	if (i <= 0) {
		printf("������������!\n");				//�ж��û������Ƿ�Ϸ�
	}
	else {
		Fib(i);					//����ݹ�
	}
	printf("��%d��쳲�������Ϊ:%d\n", i, Fib(i));
		
	system("pause");
	return 0;
}