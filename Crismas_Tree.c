// #include <stdio.h>

// void printTree(int n) {
//     int i, j, k, a;

//     int odd_array [15] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
//     for(i=0; i<n; i++)
//     {
//         if(odd_array[i] == n)
//         break;
//     }
//     printf("%d\n", i+1);
//     // Printing upper part of the tree
//     a = n;
//     n = i + 6;
//     for (i = 1; i <= n; i++) 
//     {
//         for (j = i; j < n; j++) 
//         {
//             printf(" ");
//         }
//         for (k = 1; k <= (2*i-1); k++) 
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

    // Printing lower part of the tree
//     for (i = 1; i <= 5; i++) 
//     {
//         for (j = 1; j <= 5; j++) 
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= a; j++) 
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
 

    int i, j, k, a, index;

    int odd_array[15] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};

    for(index=0; index<n; index++)
    {
        if(odd_array[index] == n)
            {
                break;
            }
    }
    //printf("%d\n", i+1);
    // Printing upper part of the tree
    a = n;
    n = index + 6;
    for (i = 1; i <= n; i++) 
    {
        for (j = i; j < n; j++) 
        {
            printf(" ");
        }
        for (k = 1; k <= (2*i-1); k++) 
        {
            printf("*");
        }
        printf("\n");
    }

    // Printing lower part of the tree
    for (i = 1; i <= 5; i++) 
    {
        for (j = 1; j <= 5; j++) 
        {
            printf(" ");
        }
        for (j = 1; j <= a; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}