#include <stdio.h>

int main() {
    char pass[100];
    int i, len = 0;
    int upper = 0, digit = 0, special = 0;

    printf("Enter password: ");
    scanf("%s", pass);

    for (i = 0; pass[i] != '\0'; i++) {
        char c = pass[i];
        len++;

       
        if (c >= 'A' && c <= 'Z')
            upper = 1;

       
        if (c >= '0' && c <= '9')
            digit = 1;

     
        if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%')
            special = 1;
    }

    if (len >= 8 && upper && digit && special)
        printf("Password is strong.\n");
    else
        printf("Password is weak.\n");

    return 0;
}

