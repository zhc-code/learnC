//在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*

#include <stdio.h>
#include <stdlib.h>

int test1() {

	int n = 13;
	int i = 1;
	int j = 0;
	for (i = 1; i < n + 1; i += 2) {
		for (j = 0; j < i; j++) {
			putchar('*');
		}
		printf("\n");
	}
	for (i = n - 2; i > 0; i -= 2) {
		for (j = 0; j < i; j++) {
			putchar('*');
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
