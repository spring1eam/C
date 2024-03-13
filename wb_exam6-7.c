/* 최댓값과 최솟값을 찾는 프로그램 */
#include <stdio.h>

void main() {
    int A[] = {76, -59, -34, 90, 169, -12, 13, 103, 3, 29};
    int i, *p, max = -1000, min = 1000;
    int maxloc, minloc;

    p = A;
    printf("배열의 값[] = {");

    for (i = 0; i < 10; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
            maxloc = i + 1;
        }
        if (*(p + i) < min)
        {
            min = *(p + i);
            minloc = i + 1;
        }
        printf(" %d ", *(p + i));
    }
    
    printf("}\n");
    printf("최대값 ==> %d, 위치 ==> %d 번째\n", max, maxloc);
    printf("최소값 ==> %d, 위치 ==> %d 번째\n", min, minloc);
}