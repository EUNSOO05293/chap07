/*
 ���ϸ�: Assignment09-c
 ����: 1~12���� �ڵ��� ����� �迭�� �����ϰ� ȭ�鿡
 ���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ���: ������
 ��¥: 2025.09.15
 ���� : v0.2
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Phone();
void print(int value);

int main()
{
	Phone();
	return 0;
	
}

void print(int value) {
	int i;
	for (i = 0; i < value / 2000; i++) {
		printf("*");
	}
	printf("\n");
}

void Phone() {
	int i, j;
	int arr[12] = { 36000, 42000, 38000, 46000, 53000, 32000, 71000, 33000, 58000, 49000, 34000, 65000 };

	for (i = 0; i < 12; i++) {
		printf("%2d�� %d:", i + 1, arr[i]);
		print(arr[i]);
	}
}
