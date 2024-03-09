/* 변수의 주소 예 */
#include <stdio.h>
void main() {
    int days = 365;
    int month = 12;
    int Table[5] = {1, 2, 3, 4, 5};
    printf("days의 주소는 %x \n", &days);
    printf("month의 주소는 %x \n", &month);
    printf("배열명 Table의 주소는 %x \n", Table);   // 배열명은 주소를 나타내기 때문에 참조('&')를 쓰지 않음
    printf("배열명 Table의 첫 번째 요소의 주소는 %x, 사이즈는 %d byte \n", &Table[0], sizeof(Table[0]));
    printf("배열명 Table의 두 번째 요소의 주소는 %x, 사이즈는 %d byte \n", &Table[1], sizeof(Table[1]));
    printf("배열명 Table의 세 번째 요소의 주소는 %x, 사이즈는 %d byte \n", &Table[2], sizeof(Table[2]));
    printf("배열명 Table의 네 번째 요소의 주소는 %x, 사이즈는 %d byte \n", &Table[3], sizeof(Table[3]));
    printf("배열명 Table의 다섯 번째 요소의 주소는 %x, 사이즈는 %d byte \n", &Table[4], sizeof(Table[4]));
    printf("int 자료형의 사이즈는 %d byte \n", sizeof(int));
}