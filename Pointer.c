#include <stdio.h>

/*

變數儲存的是記憶體的地址，可以由 & 符號取得，
pointer 本身就代表地址，就不用加 & 符號了。
如果是要取得儲存在 pointer 地址裡的值，記得家米字號 -> *pointer

*/
int main()
{

    
    int address = 5;
    printf("The address of variable is: %x\n", &address); // 369ffc3c

    // 米字號 * 宣告 pointer: address 是整數型態、pointer就宣告成整數型態
    int *pointer;

    pointer = &address; // 將address變數的地址傳給 pointer儲存
    printf("Address stored in pointer is: %x\n",pointer); 
    printf("Value stored in pointer is: %d\n",*pointer);


    return 0;
}