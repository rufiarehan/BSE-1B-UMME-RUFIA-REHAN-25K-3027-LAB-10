#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char message[200];
    char encrypted[200];

    printf("Enter a message to encrypt: ");
    fgets(message, sizeof(message), stdin);

    // Remove newline if present
    message[strcspn(message, "\n")] = '\0';

    for (int i = 0; i < strlen(message); i++) {
        char ch = message[i];

        if (isalpha(ch)) {
            // Shift uppercase letters
            if (isupper(ch))
                encrypted[i] = ((ch - 'A' + 3) % 26) + 'A';
            // Shift lowercase letters
            else
                encrypted[i] = ((ch - 'a' + 3) % 26) + 'a';
        } else {
            // Non-letter characters stay the same
            encrypted[i] = ch;
        }
    }

    encrypted[strlen(message)] = '\0'; // Null-terminate the string

    printf("Encrypted message: %s\n", encrypted);

    return 0;
}



