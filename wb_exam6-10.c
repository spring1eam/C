/* 포인터 배열을 이용한 프로그램 */
#include <stdio.h>

void main() {
    int str;
    char *name[5] = {
        {"KOREA"},
        {"NATIONAL"},
        {"OPEN UNIVERSITY"},
        {"COMPUTER"},
        {"SCIENCE"}
        };
    for(str = 0; str < 5; str++){
        printf("%d 번째 문자열 : %s\n",str + 1, *(name + str));
    }
}