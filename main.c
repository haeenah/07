#include <stdio.h>

void f(void);

int i; // 전역 변수

int main(void) {
    for (i = 0; i < 5; i++) {
        f();
    }
    return 0;
}

void f(void) {
    int i; // 지역 변수로 따로 선언하여 전역 변수 i와 값이 엉키는 무한 루프 문제 해결!
    for (i = 0; i < 10; i++) {
        printf("#");
    }
    printf("\n");
}