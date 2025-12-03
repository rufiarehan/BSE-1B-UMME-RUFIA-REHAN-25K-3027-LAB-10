#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int hasUpper = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);

    // remove newline from fgets
    password[strcspn(password, "\n")] = '\0';

    // Rule 1: Check length
    if (strlen(password) < 8) {
        printf("Password is too short! Must be at least 8 characters.\n");
        return 0;
    }

    // Check other rules
    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else if (password[i] == '!' || password[i] == '@' || password[i] == '#'
                 || password[i] == '$' || password[i] == '%')
            hasSpecial = 1;
    }

    // Final validation
    if (hasUpper && hasDigit && hasSpecial) {
        printf("Password is strong!\n");
    } else {
        printf("Password is weak! It must contain:\n");
        if (!hasUpper) printf("- At least one uppercase letter\n");
        if (!hasDigit) printf("- At least one digit\n");
        if (!hasSpecial) printf("- At least one special character (!,@,#,$,%)\n");
    }

    return 0;
}



