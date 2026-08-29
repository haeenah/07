#include <stdio.h>

int all_files; // 전역 변수 선언

extern void sub(void); // 다른 파일에 있는 함수 선언

int main(void) {
    sub();
    printf("%d\n", all_files);
    return 0;
}