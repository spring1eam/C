/*  포인터 연산 예1 */
#include <stdio.h>
void main() {
    int *p, a[] = {10, 20, 30, 40, 50};
    p = &a[0];  /* 배열 첫 번째 요소 주소값을 포인터 변수 p에 저장 */
    printf("*p     == %d \n", *p);
    printf("p      == %x \n", p);

    printf("*p++   == %d \n", *p++);  // 포인터 p의 값을 출력 후 주소 1(4byte) 증가
    printf("p      == %x \n", p);

    printf("*++p   == %d \n", *++p);  // 포인터 p의 주소 1(4byte) 증가 후 포인터 p의 값 출력
    printf("p      == %x \n", p);
    
    p = p + 2;  // 포인터 p의 주소2(8byte) 증가
    
    printf("*p     == %d \n", *p);
    printf("p      == %x \n", p);

    printf("a[2]   == %d \n", a[2]);
    printf("&a[2]  == %x \n", &a[2]);
    
    printf("*p + 2 == %d \n", *p + 2);
    printf("p      == %x \n", p);
}