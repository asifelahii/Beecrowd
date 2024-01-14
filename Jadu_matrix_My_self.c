#include<stdio.h>

int jadu_matrix(int Arr[1000][1000], int row, int col)
{
    int i, j;

    if(row != col)
    {
        return 0;
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==j && Arr[i][j] == 1)
            {
                return 1; // Jadu Matrix
            }
            else if(i != j && Arr[i][j] == 1)
            {
                return 1; // Jadu Matrix
            }
        }
    }
    return 1; //Condition satisfied
}

int main()
{
    int row, col, i, j, Arr[10000][1000];

    scanf("%d %d", &row, &col);
    //int Arr[row][col];

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    if(jadu_matrix(Arr, row, col))
    {
        printf("YES\n");
    }
    else
    {
        Printf("NO\n");
    }

    return 0;
}