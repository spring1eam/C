/* 문자열(대문자)를 입력받아 암호화하는 프로그램 */
#include <stdio.h>
/* #include <conio.h> */
#include <ctype.h>

void main() {
    char code[] = "5js7un9poqrwx3zadthec4kmv";
    char ch[100];
    int i = 0;
    
    for( ;(ch[i] = getchar()) != '\r'; ) {  // conio.h 헤더를 불러올 수 없어 getche() 사용 불가
        if(isupper(ch[i]))
            ch[i++] = code[ch[i] - 65];
        else
            i++;
    }
    ch[i] = '\0';
    printf("\n\n");

    for(i = 0; ch[i] !='\0'; i++)
        putchar(ch[i]); // conio.h 헤더를 불러올 수 없어 putch() 사용 불가
}
