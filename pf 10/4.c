#include <stdio.h>

int main() {
    char msg[200] = "Meet me at the park tomorrow";
    int i;

    printf("Original: %s\n", msg);

   
    for (i = 0; msg[i] != '\0'; i++) {
        char c = msg[i];

       
        if (c >= 'a' && c <= 'z') {
            c = c + 3;
            if (c > 'z')
                c = c - 26;
        }
        
        else if (c >= 'A' && c <= 'Z') {
            c = c + 3;
            if (c > 'Z')
                c = c - 26;
        }

        msg[i] = c;
    }

    printf("Encrypted: %s\n", msg);

   
    for (i = 0; msg[i] != '\0'; i++) {
        char c = msg[i];

        if (c >= 'a' && c <= 'z') {
            c = c - 3;
            if (c < 'a')
                c = c + 26;
        }
        else if (c >= 'A' && c <= 'Z') {
            c = c - 3;
            if (c < 'A')
                c = c + 26;
        }

        msg[i] = c;
    }

    printf("Decrypted: %s\n", msg);

    return 0;
}

