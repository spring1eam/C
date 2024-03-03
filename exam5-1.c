/* ASCII값 변환을 통한 대문자 <-> 소문자 변환 프로그램 */
#include <stdio.h>
#pragma warning(disable:4996)
char upper(char ch);
char lower(char ch);
void main()
{
    char in_s[50], out_s[50];
    char ch;
    int i  = 0;
    printf("문자열을 입력하시오. (50자 이내) : ");
    gets(in_s); //scanf("%s", in_s); 적용 시 공백을 '\0'으로 인식해서 중단되는 것 같아, gets()로 변경
    printf("입력된 값은 %s 입니다.\n", in_s);
    ch = in_s[i];
    while (ch != 0)
    {
        if(ch >= 'A' && ch <= 'Z')
            out_s[i] = lower(ch);
        else if(ch >= 'a' && ch <= 'z')
            out_s[i] = upper(ch);
        else
            out_s[i] = ch;
        i++;
        ch = in_s[i];        
    }
    out_s[i] = '\0';
    printf("변환된 결과 ==> %s \n", out_s);
}

char upper(char ch)
{
    return ch - 32;
}

char lower(char ch)
{
    return ch + 32;
}
