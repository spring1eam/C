/* 입력되는 소문자를 대문자로, 대문자를 소문자로 변화하는 프로그램 */
#include <stdio.h>
#include <ctype.h>

void main()
{
    char ch, ch1, ch2;
    printf("문자를 입력하시오 \n");
    ch = getchar();
    if(isupper(ch))
    {
        printf("%c is a uppercase \n", ch);
        ch1 = tolower(ch);
        printf("%c is a lowercase \n", ch1);
    }
    else if(islower(ch))
    {
        printf("%c is a lowercase \n", ch);
        ch2 = toupper(ch);
        printf("%c is a uppercase \n", ch2);
    }
    else
        printf("%c is not alpha character \n", ch);
}