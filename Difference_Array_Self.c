#include<stdio.h>
int main()
{
    int i, j, t, row, col;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &row, &col);
        int A[row][col];
        int B[row][col];
        int C[row][col];

        //Taking input of A[][]
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        //Coping A[][] into B[][]
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                B[i][j] = A[i][j];
            }
        }

        //Printing A & B
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("%d ", B[i][j]);
            }
            printf("\n");
        }

        //converting 2D array B[][] to 1D array B[]
        int size = row * col;
        int newArr[size];

        //Coping elements from 2D array
        int k = 0;
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                newArr[k++] = B[i][j];
            }
        }

        //Sorting using bublesort algorithm
        for(i=0; i<size-1; i++)
        {
            for(j=0; j<size-1; j++)
            {
                if(newArr[j] > newArr[j+1])
                {
                    swap()
                }
            }
        }

        //Sorting B[][]
    //     for(i=0; j<row; i++)
    //     {
    //         for(j=0; j<col; j++)
    //         {
    //             if(B[i][j] > )
    //         }
    //     }
    // }
    
    return 0;
}