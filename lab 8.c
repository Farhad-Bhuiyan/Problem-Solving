#include <stdio.h>

int main() {
    char s[100];
    char replaceChar;

    // Input the string
    printf("Enter a string: ");
    gets(s);

    // Input the character to replace spaces
    printf("Enter the character to replace spaces: ");
    scanf("%c", &replaceChar);

    // Traverse the string and replace spaces with the given character
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            s[i] = replaceChar;
        }
    }

    // Output the modified string
    printf("Modified string: %s\n", s);

    return 0;
}
