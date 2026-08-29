extern int all_files; // main.c의 전역 변수 참조

void sub(void) {
    all_files = 10;
}