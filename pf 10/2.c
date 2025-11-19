#include <stdio.h>

int main() {
    char email[100];
    int i, found = 0;

    printf("Enter email: ");
    scanf("%s", email);

    for (i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@') {
            found = 1;
            printf("Domain: %s\n", &email[i+1]);
            break;
        }
    }

    if (!found)
        printf("Invalid email\n");

    return 0;
}

