/* 변수의 번지를 출력하는 프로그램 */
#include <stdio.h>

void main() {
    int i = 127;
    int j;

    printf("%d, %x\n", i, i);
    printf("%x\n", &i);
    printf("%#o, %#x\n", &i, &i);
    printf("%x\n", &j);
    printf("%#o, %#x\n", &j, &j);
}