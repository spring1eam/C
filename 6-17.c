/* 포인터를 이용한 2차원 배열의 참조 예 */
#include <stdio.h>
void main() {
    static int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i, j, *pt;
    pt = a[0];  // pt = a 또는 pt = &a[0][0]과 동일
    while(pt <= &a[2][2]) {
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                printf("a[%d][%d] = %d\t", i, j, *pt);
                pt++;
            }
            printf("\n");
        }
    }
}