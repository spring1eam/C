/* 입력되는 두 문자열을 연결하는 프로그램 */
#include <stdio.h>
#include <string.h>

void main()
{
    char str1[20], str2[20];
    printf("문자열 두 개를 입력하시오: \n");
    scanf("%s", str1);
    scanf("%s", str2);
    strcat(str1, str2); // strcat(): 문자열 연결함수
    printf("%s \n", str1);
}