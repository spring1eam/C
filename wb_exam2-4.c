/* 선행처리기 #include에 관련한 프로그램 */
#include <stdio.h> // 표준함수인 scanf()와 printf()를 사용하기 위한 파일 포함
// #include <conio.h> // 표준함수인 getch()를 사용하기 위한 파일 포함
#include "factorial.h" // 사용자 정의 헤더 파일인 factorial.h를 포함

void main()
{
    int x;
    scanf("%d", &x);
    printf("%d!=%d\n", x, factorial(x));
    getchar();
}