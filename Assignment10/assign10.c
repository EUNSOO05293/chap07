/*
 파일명: Assignment10-c
 내용: 1~12월의 핸드폰 요금을 배열에 저장하고 화면에
 막대 그래프로 출력하는 프로그램을 작성하시오.
 작성자: 이은수
 날짜: 2025.09.15
 버전 : v0.2
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

    printf("x 행렬:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[0][i]);
        if (i % 3 == 2) printf("\n");
    }

    printf("\ny 행렬:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[1][i]);
        if (i % 3 == 2) printf("\n");
    }

    printf("\nx + y 행렬:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[0][i] + arr[1][i]);
        if (i % 3 == 2) printf("\n");
    }
}



