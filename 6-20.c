/* 포인터 배열의 사용 예 */
#include <stdio.h>
    void main() {
        int a[] = {1, 2, 3, 4};
        int b[] = {5, 6, 7, 8};
        int *PA[2]; // 포인터 배열 선언
        PA[0] = a;
        PA[1] = b;
        printf("*(PA[0]) = %d \n", *(PA[0]));
        printf("*(PA[0] + 1) = %d \n", *(PA[0] + 1));
        printf("*(PA[1]) = %d \n", *(PA[1]));
        printf("*PA[1] + 15 = %d \n", *PA[1] + 15);
}