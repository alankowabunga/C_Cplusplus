#include <stdio.h>

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