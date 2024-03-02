/* 상수, 변수의 정의와 선언에 관련한 프로그램 */
#include <stdio.h>
#define PI 3.141592 // 매크로 정의를 이용한 상수 정의
const int K = 10; // const를 이용한 상수 정의
void main()
{
    double a; // 변수 a 선언
    a = K + PI;
    printf("%f\n", a);
    // K = 20;
    // 상수는 변하는 값이 아니므로 값을 변화시키면 에러 발생
    int x; // 변수 x 선언
    int y; // 변수 y 선언
    int z; // 변수 z 선언

    x = 10;
    y = 20;
    z = x + y;
    printf("%d\n", z);
}