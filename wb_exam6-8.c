/* 2개의 배열 a[]와 b[]의 내용을 서로 교환하는 프로그램 */
#include <stdio.h>

int swap(char *x, char *y) {
    char temp;
    while(*x){
        temp = *x;
        *x = *y;
        *y = temp;
        x++;
        y++;
    }
    return(temp);
}

void main() {
    static char a[] = "1234";
    static char b[] = "ABCD5";
    printf("<교환 전> \n");
    printf("a[] = %s \n", a);
    printf("b[] = %s \n\n", b);
    swap(a, b);
    printf("<교환 후> \n");
    printf("a[] = %s \n", a);
    printf("b[] = %s \n", b);
}