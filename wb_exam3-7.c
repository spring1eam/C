/* 단항 연산자 프로그램(++, --) */
#include <stdio.h>
void main()
{
    int x=1;

    printf("x=%d \n", x++);
    printf("x=%d \n", x++);
    printf("x=%d \n", ++x);
    printf("x=%d \n", x--);
    printf("x=%d \n", x--);
    printf("x=%d \n", --x);
}