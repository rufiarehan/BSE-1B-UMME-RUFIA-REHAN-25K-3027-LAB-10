#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[100];

    printf("Enter email address: ");
    fgets(email, sizeof(email), stdin);

    // Remove newline if exists
    email[strcspn(email, "\n")] = '\0';

    // Find '@'
    char *atPtr = strchr(email, '@');

    if (atPtr == NULL) {
        printf("Invalid email! '@' not found.\n");
        return 0;
    }

    // Copy domain part (characters after '@')
    strcpy(domain, atPtr + 1);

    printf("Domain: %s\n", domain);

    return 0;
}



