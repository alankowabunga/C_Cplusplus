#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 設計猜數字遊戲(介於 10 - 50)
int main(){

    // 潛規則: constant variable 用大寫宣告
    const int MIN=10;
    const int MAX=50;
    int counter=0;
    int guess;

    // 生成 answer
    srand(time(0));
    int answer = (rand() % MAX)+MIN;

    do{
        printf("\nPlease enter integar(10-50):");
        scanf("%d",&guess);

        if(guess>answer){
            printf("Too high");
        }else if(guess<answer){
            printf("Too low");
        }
        counter++;

    }while(answer!=guess);

    printf("************************\n");
    printf("The answer is:%d\n",answer);
    printf("Attemps time:%d\n",counter);

    return 0;
}