/*
 ���ϸ�: Assignment08-c
 ����: ��ǰ ������ ����� ������ �迭�� ���Ͽ� ������(%)�� �Է¹޾� ���ε� ������
 ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
 �ۼ���: ������
 ��¥: 2025.09.15
 ���� : v0.2
 */


#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5
#include <stdio.h>
void Prices();

int main()
{
	Prices();
	return 0;
}

void Prices()
{
	int i, discount_rate;
	int arr[ARR_SIZE];
	int arr_dis[ARR_SIZE];
	printf("��ǰ�� 5���� �Է��ϼ���:\n");

	for (i = 0; i < ARR_SIZE; i++) {
		scanf("%d", &arr[i]);
	}

	printf("������(%%)? ");
	scanf("%d", &discount_rate);

	for (i = 0; i < ARR_SIZE; i++) {
		arr_dis[i] = (arr[i] / 100) * (100 - discount_rate);
	}

	for (i = 0; i < ARR_SIZE; i++) {
		printf("����:%7d --> ���ΰ�:%7d\n", arr[i], arr_dis[i]);
	}

}


