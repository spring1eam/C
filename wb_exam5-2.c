/* 소문자를 대문자로 변환 */
#include <stdio.h>
#include <string.h> // 문자열 처리 함수의 원형을 갖고 있는 헤더파일

void main()
{
    char string[] = "abcdefghijklmnopqrstuvwxyz";
    unsigned i, len;
    puts(string);
    len = strlen(string);
    for(i = 0; i < len; i++)
        string[i] = string[i] & 0xDF;   //0xDF는 이진수로 1101 1111
    puts(string);
} 