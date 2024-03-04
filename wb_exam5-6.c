/* 입력되는 문자가 숫자인지 판별하는 프로그램 */
#include <stdio.h>
#include <ctype.h>

void main()
{
    char ch;
    ch = getchar();
    if(isdigit(ch))
        printf("%c is a number \n", ch);
    else
        printf("%c is not a number \n", ch);
}