#include <stdio.h>
#include <string.h>

// 利用 typedef 將 struct students 取別名 st
typedef struct students st;

struct students{
    char name[20];
   float gpa;
};

int main(){

    // 建立 struct 資料
    st p1={ "Alan",4.6 };
    st p2={ "Wen",4.3 };
    st p3={ "Leo",4.6 };
    st p4={ "Anna",3.6 };

    // 建立 struct array
    st stArray[] = {p1,p2,p3,p4};

    for(int i =0;i<sizeof(stArray)/sizeof(stArray[0]);i++){
        printf("name: %s , pga: %f\n",stArray[i].name,stArray[i].gpa);
    }

    return 0;
}