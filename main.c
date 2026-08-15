#include <stdio.h>

#define ROWS 3
#define COLS 3

// 두 행렬을 더하는 함수 (C = A + B)
void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS]) {
    int r, c;
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            C[r][c] = A[r][c] + B[r][c];
        }
    }
}

// 행렬을 출력하는 함수
void printMatrix(int A[][COLS]) {
    int r, c;
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            printf("%3d ", A[r][c]);
        }
        printf("\n");
    }
}

int main(void) {
    int A[ROWS][COLS] = {
        {2, 3, 0},
        {8, 9, 1},
        {7, 0, 5}
    };

    int B[ROWS][COLS] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    int C[ROWS][COLS]; // 덧셈 결과 행렬

    addMatrix(A, B, C);
    printMatrix(C);

    return 0;
}