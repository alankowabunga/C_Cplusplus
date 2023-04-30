#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'x'; // 單字符用單引號
const char COMPUTER = 'o';

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

void printBoard()
{

    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int chkBlankSpaces()
{

    int blankSpaces = 9; // 初始有 9 空格

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                blankSpaces--; // 找到不是空格並計算
            }
        }
    }
    return blankSpaces;
}

void playerMove()
{
    /*
        第一次輸入的時候，不須判斷有否有空格
        因此用 do-while，而接下來選的位置才需要判斷。
        !! 特別注意 else 必須有 break，才不會陷入無限迴圈。
    */
    int x, y;
    do
    {
        printf("Enter row number(1~3):");
        scanf("%d", &x);
        x--;
        printf("Enter column number(1~3):");
        scanf("%d", &y);
        y--;

        if (board[x][y] != ' ')
        {
            printf("Invalid input.\n");
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');
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

    if ((board[0][2] == board[1][1]) && (board[0][2] == board[2][0]))
    {
        return board[0][2];
    }

    // check right diagonal
    if ((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]))
    {
        return board[2][2];
    }

    return ' ';
}

void computerMove()
{
    srand(time(0));
    int x, y;
    /*先檢查是否含有空格、才有成亂數的必要，
   放入格子前也要先確定格子是空的，最後遊戲設計在 computerMove 檢查遊戲是否結束 */
    if (chkBlankSpaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');

        board[x][y] = COMPUTER;
    }
    else
    {
        printWinner(' '); // 結束，沒有贏家(格子用完了)
    }
}

void printWinner(char winner)
{
    if (winner == PLAYER)
    {
        printf("You win");
    }
    else if (winner == COMPUTER)
    {
        printf("Computer win");
    }
    else
    {
        printf("It's a draw");
    }
}

int main()
{
    char winner = ' ';
    char response;
    do
    {
        winner = ' ';
        response = ' ';
        resetBoard();
        /*
        當遊戲還沒結束，就在while迴圈裡直到遊戲結束:
        1. 還沒有贏家 winner == ' '
        2. 九宮格還有空格(chkBlankSpaces() != 0)
        */
        while (winner == ' ' && chkBlankSpaces() != 0)
        {
            printBoard();
            /* 每下一步都要檢查遊戲是否結束 ->
            1. 有贏家出現、2. 沒有空格了。因此我們分別判斷是否有贏家 chkWinner(): 回傳值可能是贏家的字符，或是遊戲還沒結束的空字串; 和判斷chkBlanckSpaces 回傳值是否還有空格。
            */
            playerMove();
            winner = chkWinner();
            if (winner != ' ' || chkBlankSpaces() == 0)
            {
                break; // 遊戲結束跳出while 迴圈
            }
            computerMove();
            winner = chkWinner();
            if (winner != ' ' || chkBlankSpaces() == 0)
            {
                break; // 遊戲結束跳出while 迴圈
            }
        }

        printBoard();
        printWinner(winner); // 顯示結果
        printf("\nDo you wanna restart(Y/N)?:");
        // scanf("%c");
        scanf(" %c", &response);
        response = toupper(response);

    } while (response == 'Y');

    printf("Thanks for playing!");
    return 0;
}
