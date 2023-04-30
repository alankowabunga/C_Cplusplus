#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0)); // 意思是將當前時間做為隨機數生成器的起始種子
    // rand() 是一個隨機生成器函數(隨機給 0-32767 之間的數屋)，需要先調用 srand()設定隨機亂數種子，以確保每次程序生成的序列不同。
    for (int i = 0; i < 10; i++)
    {
        int r = rand();
        printf("-> %d\n", r);
    }

    int number1 = (rand() & 6) + 1; // 由於只要尾數>6就能被整除，因此亂數除 6的餘數在 0 - 5 之間。
    printf("random number: %d",number1);
}