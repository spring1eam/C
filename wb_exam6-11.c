/* 소문자로 된 문자열을 대문자로 변환하는 프로그램 */
#include <stdio.h>

void main() {
    char *ptr, arr[] = "programming";
    int bigchar;
    ptr = arr;
    printf("before : %s\n\n", arr);
    printf("after :");

    while(*ptr) {
        bigchar = *ptr - 32;
        printf("%c", bigchar);
        ptr++;
    }
    printf("\n");
}