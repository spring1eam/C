/* 이중포인터의 사용 예 */
#include <stdio.h>
void main() {
    char a = 'A', *p, **pp; // 일반 변수, 포인터 변수, 이중 포인터 변수 선언
    p = &a; // 포인터 변수 p에 일반 변수 a의 주소값 할당
    pp = &p;    // 이중 포인터 변수 pp에 포인터 변수 p의 주소값 할당
    printf("**pp = %c \n", **pp);
}