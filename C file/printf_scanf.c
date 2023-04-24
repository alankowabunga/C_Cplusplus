#include <stdio.h>

int main()
{

    char name[10];
    int age;

    printf("What's your name?");
    // scanf("%s", &name); 不能讀取空白格
    fgets(name,10,stdin); //可讀取空白格

    printf("\nHow old are you?");
    // user-input
    scanf("%d", &age);

    // result
    printf("\nHello %s, Nice to meet you.",name);
    printf("\nYou are %d years old",age);

    return 0;
}