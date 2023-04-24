#include <stdio.h>

int main(){

    
    char unit;
    float temp;

    printf("\n (F)or(C)?");
    scanf("%c",&unit);
    unit = toupper(unit);

    switch(unit){
        case 'C':
            printf("\nEnter temp in C");
            scanf("%f",&unit);
            temp = (temp*9/5)+32;
            printf("\nTemp in F is:%f",temp);
            break;
        case 'F':
            printf("Currently on F");
            break;
    }



    return 0;
}