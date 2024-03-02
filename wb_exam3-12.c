/* 비트 연산자를 이용한 곱셈과 나눗셈 연산 프로그램 */
#include <stdio.h>
void main()
{
    int result;
    printf("4x8/16 = ");
    result = 4;
    result = result<<3;
    result = result>>4;
    printf("%d\n", result); 
}