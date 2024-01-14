#include <stdio.h>

int main() 
{
    int T;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    while (T--) 
    {
        int N;
        printf("Enter the size of the array: ");
        scanf("%d", &N);

        int A[N], B[N], C[N];

        printf("Enter the array A elements: ");
        for (int i = 0; i < N; i++) 
        {
            scanf("%d", &A[i]);
            B[i] = A[i];  // Copy elements of A to B
        }

        // Sorting array B using selection sort
        for (int i = 0; i < N - 1; i++) 
        {
            int k = i;
            for (int j = i + 1; j < N; j++) 
            {
                if (B[j] < B[k]) 
                {
                    k = j;
                }
            }
            // Swap B[i] and B[k]
            int temp = B[i];
            B[i] = B[k];
            B[k] = temp;
        }

        // Calculate and print the absolute difference array C
        printf("Absolute Difference Array: ");
        for (int i = 0; i < N; i++) 
        {
            C[i] = abs(A[i] - B[i]);
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}