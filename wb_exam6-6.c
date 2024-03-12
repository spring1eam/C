/* 입력된 문자열을 역방향으로 출력하는 프로그램 */
#include <stdio.h>
#include <string.h>

void main() {
    char buffer[80], *p = buffer;
    int len, i = 0;
    printf("Input String : ");
    scanf("%s", p);
    len = strlen(p);
    while(*p)
        p++;

    printf("Inverse String : ");
    while(i < len) {
        p--;
        putchar(*p);
        i++;
    }
    putchar('\n');
    getchar();
}