#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'x';
const char COMPUTER = 'o';

void printBoard()
{
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[0][1], board[0][2]);
    printf("\n");
}
void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}
char chkWinner()
{
    // check rows
    for (int i = 0; i < 3; i++)
    {
        if ((board[i][0] == board[i][1]) && (board[i][0] == board[i][2]))
        {
            return board[i][0];
        }
    }
    // check columns
    for (int i = 0; i < 3; i++)
    {
        if ((board[0][i] == board[1][i]) && (board[0][i] == board[2][i]))
        {
            return board[0][i];
        }
    }
    // check left diagonal
    if ((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]))
    {
        return board[2][2];
    }
    // check right diagonal
    if ((board[0][2] == board[1][1]) && (board[0][2] == board[2][0]))
    {
        return board[0][2];
    }
    // 別忘了!! 還有平手的情況! -> 回傳' ' 代表沒有贏家
    return ' ';
}
void playerMove()
{
    int x;
    int y;

    do
    {
        printf("Enter your row number(1~3):");
        scanf("%d%*c", &x);
        x--; // 索引值從 0 開始

        printf("Enter your column number(1~3):");
        scanf("%d%*c", &y);
        y--; // 索引值從 0 開始
        if (board[x][y] != ' ')
        {
            printf("Invalid input!\n");
        }
        else
        {
            board[x][y] = PLAYER;
            break; // 沒有 break 跳不出 while 迴圈
        }
    } while (board[x][y] != ' ');
}
int chkBlankSpace()
{
    int blankSpaces = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                blankSpaces--;
            }
        }
    }
    return blankSpaces;
}
void computerMove()
{
    int x, y;
    srand(time(0));

    /* 先檢查是否還有空格子，若已經沒有格子了，那就把平局的結果當作引數給 printWinner() */
    if (chkBlankSpace() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' '); // 如果電腦選的位置不是空的，就重複跑回圈
        
        board[x][y] = COMPUTER;       // 找到空格就跳出迴圈並賦值
    }else{
        printWinner(' '); //代表沒有贏家(格子沒了)
    }
}
void printWinner(char winner)
{
    if (winner == PLAYER)
    {
        printf("You Win!");
    }
    else if (winner == COMPUTER)
    {
        printf("Computer Win!");
    }
    else
    {
        printf("It's a draw!");
    }
}
int main()
{
    char winner = ' '; // 初始狀態沒有贏家

    resetBoard();

    // 若遊戲還沒結束
    while (winner == ' ' && chkBlankSpace() != 0)
    {
        printBoard(); // 每一步都要重新印一次

        playerMove();
        winner = chkWinner(); // chkWinner 回傳的可能是 PLAYER , COMPUTER or 平手 ' '...放入變數進行判斷。
        if (winner != ' ' || chkBlankSpace() == 0)
        {
            break; // 遊戲結束，跳出迴圈
        }

        computerMove();
        winner = chkWinner();
        if (winner != ' ' || chkBlankSpace() == 0)
        {
            break; // 遊戲結束，跳出迴圈
        }
    }

    // 別忘了遊戲結束跳出迴圈也要印出最後的九宮格
    printBoard();
    printWinner(winner);

    return 0;
}