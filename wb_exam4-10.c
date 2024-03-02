/* *표를 이용하여 삼각형 모형을 출력하는 프로그램 */
#include <stdio.h>
void main()
{
    int i, j;
    for(i = 0; i < 5; i++)
    {   
        for(j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
     
}