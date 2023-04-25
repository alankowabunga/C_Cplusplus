#include <stdio.h>

int main(){

    char cars[][10] = {"Mustang","MG7","Q60"};

    for(int i = 0; i<sizeof(cars)/sizeof(cars[0]);i++){
        printf("%s\n",cars[i]);
    }

    strcpy(cars[0],"430i"); // 利用 strcpy()來更改陣列中的值

    for(int i=0;i<sizeof(cars)/sizeof(cars[0]);i++){
        printf("%s\n",cars[i]);
    }
}