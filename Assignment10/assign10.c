/*
 ���ϸ�: Assignment10-c
 ����: 1~12���� �ڵ��� ����� �迭�� �����ϰ� ȭ�鿡
 ���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ���: ������
 ��¥: 2025.09.15
 ���� : v0.2
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void showXY();

int main() {
    showXY();
    return 0;
}

void showXY() {
    int arr[2][9];
    int i;

    for (i = 0; i < 9; i++) {
        arr[0][i] = (i + 1) * 10;   
    }

    for (i = 0; i < 9; i++) {
        arr[1][i] = 9 - i;          
    }

    printf("x ���:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[0][i]);
        if (i % 3 == 2) printf("\n");
    }

    printf("\ny ���:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[1][i]);
        if (i % 3 == 2) printf("\n");
    }

    printf("\nx + y ���:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[0][i] + arr[1][i]);
        if (i % 3 == 2) printf("\n");
    }
}



