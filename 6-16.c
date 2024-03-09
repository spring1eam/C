/* 포인터를 이용한 1차원 배열의 참조 예 */
#include <stdio.h>
void main() {
    static int a[] = {10, 20, 30, 40, 50};
    int *pa, b, c, d;
    pa = a;
    b = *pa + *(pa + 4); // 60
    pa += 4;
    c = *pa + *(pa - 4); // 60
    d = *pa + 5; // 55
    printf("b = %d, c = %d, d = %d \n", b, c, d);
}