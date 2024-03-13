/* 배열과 포인터를 이용한 각종 연산 프로그램 */
#include <stdio.h>

void main() {
    float array[] = {100.0, 200.0, 300.0, 400.0, 500.0};
    float *ptr;
    int len;
    ptr = array;
    printf("%.1f\n", *ptr);
    ptr++;
    printf("%.1f\n", *ptr);
    ptr++;
    printf("%.1f\n", *ptr);
    ptr++;
    printf("%.1f\n", *ptr);
    ptr++;
    printf("%.1f\n", *ptr);
    ptr++;
    ptr = array;
    printf("%.1f\n", *(ptr + 2));
    printf("%.1f %.1f\n", (ptr + 0)[0], (array + 0)[0]);
    printf("%.1f %.1f\n", (ptr + 1)[0], (array + 1)[0]);
    printf("%.1f %.1f\n", (ptr + 4)[0], (array + 4)[-2]);
    printf("%.1f %.1f\n", (ptr - 1)[0], (array - 1)[1]);
    printf("%.1f %.1f\n", (ptr + 0)[2], (array + 0)[3]);
    return;
}