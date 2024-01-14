// #include <stdio.h>

// int isJM(int matrix[100][100], int n, int m) 
// {
//     // Check if the matrix is square
//     if (n != m) 
//     {
//         return 0; // Not a square matrix
//     }

//     // Check the values of the primary and secondary diagonals
//     for (int i = 0; i < n; i++) 
//     {
//         for (int j = 0; j < m; j++) 
//         {
//             if ((i == j || i + j == n - 1) && matrix[i][j] != 1) 
//             {
//                 return 0; // Not a Jadu Matrix
//             } else if (i != j && i + j != n - 1 && matrix[i][j] != 0) 
//             {
//                 return 0; // Not a Jadu Matrix
//             }
//         }
//     }

//     return 1; // It's a Jadu Matrix
// }

// int main() 
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int matrix[100][100];

//     // Input the matrix
//     for (int i = 0; i < n; i++) 
//     {
//         for (int j = 0; j < m; j++) 
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // Check if it's a Jadu Matrix
//     if (isJM(matrix, n, m)) 
//     {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }

#include<stdio.h>
int main()
{
    int i, j, row, col, sum = 0;

    scanf("%d %d", &row, &col);
    int Arr[row][col];

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    // for(i=0; i<row; i++)
    // {
    //     for(j=0; j<col; j++)
    //     {
    //         printf("%d", Arr[i][j]);
    //     }

    //     printf("\n");
    // }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if((i==j || i+j == row - 1) && Arr[i][j] != 0)
            {
                printf("Yes %d\n", i);
            }
        }
    }
    printf("%d\n", sum);

    return 0;
}