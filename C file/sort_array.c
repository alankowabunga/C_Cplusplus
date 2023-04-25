#include <stdio.h>

// 進行排序的函式
void sort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++) // len 是長度，索引值從0開始
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if(arr[j]>arr[j+1]){
                //更改值之前將本身的值丟入新的變數保存
                int temp = arr[j]; 
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void print(int array[],int length){

    for(int i=0;i<length;i++){
        printf("\n%d ,",array[i]);
    }
}
// 提供引數的主程式
int main()
{

    int array[] = {
        3,
        4,
        8,
        1,
        9,
        7,
        2,
    }; // 需要排序的陣列
    int length = sizeof(array) / sizeof(array[0]);
    sort(array,length); //排序
    print(array,length); //印出
}