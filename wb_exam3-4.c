/* 문자형과 문자열 자료의 입출력 프로그램 */
#include <stdio.h>
#define UNIV "한국방송통신대학교"
#define DEP "컴퓨터과학과"
void main()
{
    char ch;
    char name[20];

    printf("이름을 입력하시오");
    gets(name);
    printf("학점을 입력하시오");
    ch=getchar();
    printf("\n\n");

    puts(UNIV);
    puts(DEP);
    puts(name);
    printf("학점은");
    putchar(ch);
}