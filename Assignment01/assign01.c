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

    printf("첫 번째 항?");
    scanf("%d", &first);

    printf("공차?");
    scanf("%d", &diff);

    seq(arr, 10, first, diff);

    return 0;
}
