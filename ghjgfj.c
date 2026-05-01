#include <stdio.h>

int main() {
    int n, count = 1, x = 1, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    while (count <= n);
    {
        sum = sum + x;
        x = x * 10 + 1;
        count++;
    }

    printf("Sum of the series: %d\n", sum);
    return 0;
}
