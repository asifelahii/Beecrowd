#include <stdio.h>

int main() 
{
    int row, col;
    scanf("%d %d", &row, &col);

    int Arr[row][col];

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    for (int j = 0; j < col; j++) 
    {
        printf("%d ", Arr[row - 1][j]);
    }
    printf("\n");

    for (int i = 0; i < row; i++) 
    {
        printf("%d\n", Arr[i][col - 1]);
    }

    return 0;
}