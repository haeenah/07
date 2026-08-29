#include <stdio.h>
#include <stdlib.h> // system() 함수를 위해 추가

int inc(int counter) {
    counter++;
    return counter;
}

int main(void) {
    system("chcp 65001"); // 콘솔 한글 깨짐 방지

    int i = 10;

    printf("함수 호출전 i=%d\n", i);
    inc(i);
    printf("함수 호출후 i=%d\n", i);

    return 0;
}