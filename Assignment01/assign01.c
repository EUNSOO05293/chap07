/* ���ϸ�: Assignment1 - c
���� : 1. ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
ù ��° ���� ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�ۼ��� : ������
��¥ : 2025.05.28
���� : v0.1
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void seq(int arr[], int size, int first, int diff) {
    for (int i = 0; i < size; i++) {
        arr[i] = first + i * diff;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10];
    int first, diff;

    printf("ù ��° ��?");
    scanf("%d", &first);

    printf("����?");
    scanf("%d", &diff);

    seq(arr, 10, first, diff);

    return 0;
}
