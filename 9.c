#include <stdio.h>

int main() {
    char str[100], temp;
    int i = 0, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets for safe input

    // Remove the newline character manually
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    // `i` now holds the length of the string
    j = i - 1;

    // Reverse the string
    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
