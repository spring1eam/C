/* 이 프로그램은 화씨를 섭씨로 변환하는 프로그램이다. */    // 설명문
#include <stdio.h>  // 선행처리기
/* 변환 상수 정의 */  // 설명문
#define FZ_PT 32.0  // 상수 정의
#define S_FACTOR (5.0/9.0)  // 상수 정의

void main() // main() 함수 선언, 자료형(void)
{   // main() 함수 시작
    float fa, ce;   // 자료형(float), 변수명(fa, ce)
    printf("Enter Fahrenheit temperature : ");  // printf(): 자료출력함수
    scanf("%f", &fa);   // scanf(): 자료입력함수
    ce=(fa-FZ_PT)*S_FACTOR;    // 수식(연산자 사용)
    printf("Celsius equivalent : %.1f\n", ce);
    return 0;
}   // main() 함수 끝