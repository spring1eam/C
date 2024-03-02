/* 알파벳 돛 출력 */
#include <stdio.h>
void main()
{
    int i, j;
    float m, k;
    k = 26;
    for(i = 65; i <= 90; i++)
    {
        for(m = k; m >= 0; m--)
            printf(" ");      
        k -= 1;
        for(j = 65; j <= i; j++)        
            printf("%c", j);        
        printf("\n");
    }
    getchar();
}