/* 구구단을 7단부터 9단까지 3 줄로 출력하는 프로그램 */
#include <stdio.h>

void main()
{
    int i, j;

    for(i = 7; i <= 9; i += 3)
        for(j = 1; j <= 9; j++)
        {
            printf("\t %2d * %2d = %2d \t", i, j, i * j);
            printf("\t %2d * %2d = %2d \t", i+1, j, (i+1) * j);
            printf("\t %2d * %2d = %2d \n", i+2, j, (i+2) * j);
        }
        // getchar();
        printf("\n");
}