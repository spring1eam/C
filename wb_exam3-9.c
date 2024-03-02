/* 입력된 영문자의 소문자 여부를 판별하는 프로그램 */
#include <stdio.h>

void main()
{
    char ch;
    int j;
    printf("문자를 입력하시오 : ");
    scanf("%c", &ch);
    j=(ch >= 'a' && ch <= 'z');

    printf("결과는 %d \n", j);
}