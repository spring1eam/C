/* 문자열에서 한글만 추출하는 프로그램 */
#include <stdio.h>
void main() {
    unsigned char *p = "Computer science 컴퓨터과학과";
    unsigned char buff[20] = {0, };
    int i = 0;
    while(*p){
        if(*p > 127){
            buff[i++] = *p;
        }
        p++;
    }
    puts(buff);
}