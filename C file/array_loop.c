#include <stdio.h>

int main()
{

    int numbers[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    /*
    總數 total = sizeof(numbers) = 6 ，也就是 rows * columns
    每一行的欄位數相同，因此用 numbers[0] 第一行表示即可。 
    rows = total / column -> sizeof(numbers) / sizeof(numbers[0])
    
    要注意的是，sizeof不是指數量，而是資料的大小，因此要除以每單位才能算出數量
    */
    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("\nrows: %d", rows);
    printf("\ncolumns: %d", columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("\n%d", numbers[i][j]);
        }
    }
}