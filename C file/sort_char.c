#include <stdio.h>

// 進行排序的函式
void sort(char arr[], int len)
{
    for (int i = 0; i < len - 1; i++) // len 是長度，索引值從0開始
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // 更改值之前將本身的值丟入新的變數保存
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void print(char array[], int length)
{

    for (int i = 0; i < length; i++)
    {
        printf("\n%c ,", array[i]);
        // %d: 整數、%s: 字串:、%c 才是單個字符
    }
}
// 提供引數的主程式
int main()
{
    // !!不能用雙引號!! 單引號用於表示一個字元字面量，它只能包含一個字元。
    char array[] = {
        'c', 's', 'g', 'e', 'l'};
    // 需要排序的陣列
    int length = sizeof(array) / sizeof(array[0]);
    sort(array, length);  // 排序
    print(array, length); // 印出
}