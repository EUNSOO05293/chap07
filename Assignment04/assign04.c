/*
 ���ϸ�: Assignment4-c
 ����: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ������ �ִ��� ���� ���ҿ�
 �ּҰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �迭�� �ʱ� ���� ������� ���Ͻÿ�.
 �ۼ���: ������
 ��¥: 2025.09.15
 ���� : v0.2
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Arr(int arr[], int size);

int main() {
	int arr[10] = { 23,45,62, 12, 99,83 ,23, 50, 72,37 };

	Arr(arr, 10);

	return 0;
}

void Arr(int arr[], int size) {
	int max = arr[0], min = arr[0], maxIndex = 0, minIndex = 0;

	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxIndex = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			minIndex = i;
		}
	}
	printf("�ִ밪: %d (�ε��� %d\n", max, maxIndex);
	printf("�ּҰ�: %d (�ε��� %d\n", min, minIndex);
}

