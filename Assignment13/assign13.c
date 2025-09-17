/*
 ���ϸ�: Assignment13-c
 ����: ��Ʈ OR �����ڸ� �̿��ϸ� �� �̹����� ��ĥ �� �ִ�.
ũ�Ⱑ ���� 2���� unsigned char �迭�� ��Ʈ OR ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ���: ������
 ��¥: 2025.09.15
 ���� : v0.2
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bit_or(unsigned char a[], unsigned char b[], unsigned char c[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        a[i] = rand() % 256;
        b[i] = rand() % 256;
        c[i] = a[i] | b[i];
    }

    printf("image1:");
    for (i = 0; i < size; i++) printf(" %02X", a[i]);

    printf("\nimage2:");
    for (i = 0; i < size; i++) printf(" %02X", b[i]);

    printf("\nimage3:");
    for (i = 0; i < size; i++) printf(" %02X", c[i]);

    printf("\n");
}

int main() {
    unsigned char image1[16], image2[16], image3[16];

    srand((unsigned int)time(0)); 

    bit_or(image1, image2, image3, 16);

    return 0;
}
