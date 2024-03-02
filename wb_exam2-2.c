/* 자료형의 개념에 관한 프로그램 */
#include <stdio.h>
#define AGE 28
#define PI 3.141592
#define NAME "홍길동"

const int a=10;
const float b=10.56789;
const char c='K'; // const를 이용한 문자형 상수 정의
const char* KNOU="한국방송통신대학교"; // const를 이용한 문자열 상수 정의

void main()
{
    int i=28;
    float j=4.0;
    char k='A'; // 문자형 변수 정의
    char ch[10]="홍길동"; // 문자열 변수 정의(배열변수 이용)
    char *p="컴퓨터과학과"; // 문자열 변수 정의(포인터변수 이용)

    printf("학교는: %s 이름은: %s 나이는: %d\n\n", KNOU, NAME, AGE);
    printf("%s %s 나이: %d 학점: %c 평점: %f\n", p, ch, i, k, j);
}