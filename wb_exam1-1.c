/* 이 프로그램은 두 수의 곱을 계산하는 프로그램이다. */
/* 도입부 */
#include <stdio.h>
int product(int x, int y);
/* main() */
void main(){
    int a, b, c;
    printf("Enter a number between 1 and 100 : ");
    scanf("%d", &a);
    printf("Enter another number between 1 and 100 : ");
    scanf("%d", &b);
    c = product(a, b);
    printf("%d * %d = %d\n", a, b, c);
}
/* 호출함수 */
int product(int x, int y){
    return (x * y);
}