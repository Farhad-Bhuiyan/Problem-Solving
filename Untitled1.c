#include <stdio.h>

int main() {
    int i, j, n;

    // Input the value of n
    scanf("%d", &n);

    // Outer loop to control the rows
    for (i = 1; i <= n; i++) {

        // Inner loop to print numbers from n down to i
        for (j = n; j >= i; j--) {
            printf("%d ",j);
        }

        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
