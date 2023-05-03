#include <stdio.h>
/*
用 r 模式讀取 文字檔，並建立 buffer 陣列當儲存讀取文字的容器，
fgets(要放入的變數-> buffer , 容量大小 ,讀取檔案的變數地址 ) 方法一次只能讀取一行，因此要利用 while迴圈

Bonus: 若是讀取不到會回傳 NULL，因此檢查檔案地址是否存在、和檢查是否還有文字未讀取都可以用 NULL 搭配判斷式。
*/
int main()
{

    FILE *fP = fopen("test.html", "r");
    char buffer[255];

    if (fP == NULL)
    {

        printf("File doesn't exist...");
    }
    else
    {

        while (fgets(buffer, 255, fP) != NULL)
        {
            printf("%s", buffer);
        }
    }
    fclose(fP);

    return 0;
}