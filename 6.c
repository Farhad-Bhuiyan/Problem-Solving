#include <stdio.h>

int main() {
    char str[100];
    int start = 0, end, i;

    // Input the string manually
    printf("Enter a string: ");
    gets(str); // Null-terminate the string

    // Reverse each word
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i + 1] == '\0') {
            end = (str[i] == ' ') ? i - 1 : i;

            // Reverse the word using a simple loop
            for (int j = start, k = end; j < k; j++, k--) {
                char temp = str[j];
                str[j] = str[k];
                str[k] = temp;
            }

            start = i + 1; // Move to the next word
        }
    }

    // Output the result
    printf("Reversed string: %s\n", str);

    return 0;
}
