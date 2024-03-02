/* 문자형 자료의 입출력 프로그램(소문자를 대문자로 변환) */
#include <stdio.h>

void main()
{
    char c;
    printf("소문자 한 개를 입력하시오 \n");
    c=getchar();
    c-=32;  //소문자 ASCII 코드값 -32 = 대문자 ASCII 코드값 
    putchar(c);
}