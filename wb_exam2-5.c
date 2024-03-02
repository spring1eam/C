/* 매크로 상수 정의 프로그램 */
#include <stdio.h>

#define program void main() //매크로명 program으로 void main()을 치환
#define print printf //매크로명 print로 printf를 치환
#define MAX 100 //매크로명 MAX값으로 100을 치환
#define MIN 10 //매크로명 MIN값으로 10을 치환

program
{
    print("MAX:%d MIN:%d\n", MAX, MIN);
}