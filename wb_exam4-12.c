/* 숫자 맞추기 게임 */
#include <stdio.h>
#include <stdlib.h>
void main()
{
    unsigned secret_num, guess_num, k, times = 1;
    unsigned again = 1, win = 0;
    char reply;

    printf("** Game Start **\n");
    while(again)
    {
        printf("\n= %u 번째 게임 = \n", times++);
        secret_num = rand() % 100;   // rand()는 0 ~ 2147583647 사이 값 중 하나를 무작위로 선택해 줌. 100을 나눈 나머지 값을 가지므로 0 ~ 99 사이의 값을 가짐
        win = 0;
        k = 1;
        while(k++ <= 7)
        {
            printf("0 ~ 99 사이의 수를 입력하세요.(%u/7) : ", k-1);
            scanf("%u", &guess_num);
            if(guess_num == secret_num)
            {
                win = 1;
                k = 8;
            }
            else if(guess_num < secret_num)
                printf("%u보다 큰 수입니다.\n", guess_num);
            else
                printf("%u보다 작은 수 입니다.\n", guess_num);
        }
        if(win)
            printf("당신은 숫자를 맞췄습니다. 축하합니다. \n");
        else
            printf("단신은 숫자를 맞추지 못했습니다. 정답은 %u 였습니다. 다시 시도하세요 \n", secret_num);
        printf("다시 하시겠습니까? (y/n) ");
        getchar();  //getchar()는 입력 버퍼에서 직전 입력 함수가 읽어들인 마지막 위치부터 시작하여 읽어 들이므로 이전 개행 문자 삭제를 위해 호출 scanf() 함수의 경우 이전 공백 문자는 무시
        reply = getchar();  // y or n 을 읽어 들임
        if(!(reply == 'y' || reply == 'Y'))
            again = 0;
    }
    printf("\n** Good Bye **\n");
}