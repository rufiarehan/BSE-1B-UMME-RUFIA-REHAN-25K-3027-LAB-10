#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];

        if (isalpha(ch)) {
            // Convert to lowercase to simplify vowel check
            ch = tolower(ch);
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (ch == ' ') {
            spaces++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}

     


