// enum -> constant
// 變數會以整數值儲存，預設為從 0 開始賦值

#include <stdio.h>
#include <string.h>

typedef enum Day day;
enum Day{Sat=7,Sun=1,Mon=2};

int main(){

    day today = Sat;
    printf("%d: ",today); // 7 

    if(today == 7 || today ==1){
        printf("Happy Holiday");
    }else{
        printf("Blue Monday");
    }

    return 0;
}