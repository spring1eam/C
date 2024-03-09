/* 포인터 변수가 매개변수로 사용된 함수 예 */
#include <stdio.h>
int change(int *);  // change 함수의 원형 선언
void main() {
    int a = 10;
    int *p = &a;    // 포인터 변수 p를 선언하고 변수 a의 주소 저장 p = &a
    printf("함수 호출 이전의 a : %d \n", a);
    change(p);  /* 함수의 매개변수인 k가 포인터이므로 change 함수를 호출할 때 인자로 a 대신 a를 포인트하고 있는 p를 매개변수로 전달 */
    printf("함수 호출 이후의 a : %d \n", a);
}
int change(int *k) {
    *k = *k + *k;   /* 함수 내부에서는 k가 포인트하는 곳의 값을 다루어야 하므로 *k를 사용 */
}