//��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 1;
	int j = 0;
	for (; i < 101; i++) {
		if (i % 10 == 9 && i % 9 == 0 && i > 10) {			//�г�99����������
			j += 2;
		}
		else if (i % 10 == 9) {
			j++;
		}
	}
	printf("1��100������������9һ�����ֵĴ�����%d��\n", j);
	system("pause");
	return 0;
}