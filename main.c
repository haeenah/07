#include <stdio.h>

int main(void) {
    int flag = 1;
    int y; // y의 범위를 main 함수 전체로 확대

    while (flag != 0) {
        y = 3;
        flag = 0;
    }

    y = 4; // y가 main 함수 지역 변수이므로 접근 가능!

    return 0;
}