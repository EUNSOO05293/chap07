/*
 ���ϸ�: Assignment06-c
 ����: ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷��� �ۼ��Ͻÿ�.
 �Ǽ��� �迭�� �ʱⰪ�� ������� ���Ͻÿ�.
 �ۼ���: ������
 ��¥: 2025.09.15
 ���� : v0.2
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void floatArr(float arr[], int size);

int main() {
	int size = 10;
	float arr[10] = { 1.3, 4.1, 3.3, 7.4, 6.5, 4.9, 8.1, 4.6, 5.1, 2.3 };
	floatArr(arr, 10);
	return 0;
}

void floatArr(float arr[], int size) {
	int i;
	printf("�迭: ");
	for (i = 0; i < size; i++) {
		printf("%.1f ", arr[i]);
	}
	printf("\n");

	printf("���� �迭: ");
	for (i = size - 1; i >= 0; i--) {
		printf("%.1f ", arr[i]);
	}
}