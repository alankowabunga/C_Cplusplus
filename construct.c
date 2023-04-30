#include <stdio.h>
/*
Struct是一種自訂的資料型態，比較像是為了描述某個資料而自訂出來的，而為此我們會組合許多不同變數，如同資料表中會有許多不同欄位，但都是為了描述一筆一筆的資料而生。
*/
typedef struct students st;

struct students{
    char name[20];
    int age;
};

int main(){

    st p1={
        .name="Alan",
        .age=26
    };
    st p2={
        "Wen",
        25
    };

    printf("%s\n",p1.name); // Alan
    printf("%d\n",p2.age); // 25

    return 0;
}