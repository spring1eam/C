/* char형 포인터의 사용 예 */
#include <stdio.h>
void main() {
    char *cp = "COMPUTER";
    int i = 0;
    do
        printf("*(cp + %d) : %c \n", i, *(cp + i));
    while(*(cp + i++) != '\0');
}