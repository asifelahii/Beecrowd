#include <stdio.h>

void printTree(int n) {
    int rows = n + 5;  // Adjust the number of rows based on the given pattern

    // Print upper part of the tree
    for (int i = 1; i <= rows; i += 2) {
        // Print spaces
        for (int j = 0; j < (rows - i) / 2; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Print lower part of the tree
    for (int i = 0; i < 2; i++) {
        // Print spaces
        for (int j = 0; j < (rows - 1) / 2; j++) {
            printf(" ");
        }
        // Print star
        printf("*\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    // Check if N is odd
    if (N % 2 == 0) {
        printf("N should be odd.\n");
        return 0;
    }

    printTree(N);

    return 0;
}
