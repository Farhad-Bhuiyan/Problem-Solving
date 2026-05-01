#include <stdio.h>
int sum_of_digits(int num) {
    if (num == 0) {
        return 0;
    }
    return num % 10 + sum_of_digits(num / 10);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sum_of_digits(num));

    return 0;
}
