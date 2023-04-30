#include <stdio.h>

int main(){

    char name[] ="Bro";
    int age = 25;

    birthday(name,age);


    return 0;
}

void birthday(char x[],int y){

    printf("\nHello %s",x);
    printf("\nYou got %d dollars in your pocket",y);
}