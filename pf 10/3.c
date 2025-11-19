#include <stdio.h>

int main() {
    char text[200];
    int i;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter text: ");
    fgets(text, 200, stdin);

    for (i = 0; text[i] != '\0'; i++) {
        char c = text[i];

  
        if (c >= '0' && c <= '9') {
            digits++;
        }
     
        else if (c == ' ') {
            spaces++;
        }
     
        else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {

         
            char lower = c;
            if (c >= 'A' && c <= 'Z')
                lower = c + 32; 
            if (lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Total characters: %d\n", i);

    return 0;
}

