#include <stdio.h>

/*
1. struct struct名稱: 宣告了 struct 的名稱，就可以在使用時宣告他的變數名稱、接著賦值。
int main(){

    stuct名稱 變數名稱;
    //變數名稱.屬性 = 賦值;

    return 0;
}

2. 由於 struct 名稱等同於資料型態功能，因此可以搭配 deftype( 可以將資料型態取一個別名 )

例如原本宣告變數時: students p1;
typedef struct students st -> 此時為struct變數取別名 st
就會變成: st p1;
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