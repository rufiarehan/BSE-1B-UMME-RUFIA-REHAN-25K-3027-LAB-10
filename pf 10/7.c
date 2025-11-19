#include <stdio.h>
#include <string.h>

int main() {
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};

    char courses[4][5][20] = {
        {"Math", "Physics", "English"},                
        {"Biology", "Chemistry"},                      
        {"Math", "Physics", "Computer", "Art"},     
        {"Physics", "Math", "Sports", "Music"}         
    };

    int courseCount[4] = {3, 2, 4, 4};
    int i, j;

    printf("Student Course Registrations:\n");
    printf("---------------------------------------\n");

    for (i = 0; i < 4; i++) {
        printf("%s: ", students[i]);
        for (j = 0; j < courseCount[i]; j++) {
            printf("%s  ", courses[i][j]);
        }
        printf("\n");
    }

    printf("\nStudents taking Physics:\n");
    printf("---------------------------------------\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < courseCount[i]; j++) {
            if (strcmp(courses[i][j], "Physics") == 0) {
                printf("%s\n", students[i]);
                break;  
            }
        }
    }

    printf("\nOverloaded Students (more than 3 courses):\n");
    printf("---------------------------------------\n");

    for (i = 0; i < 4; i++) {
        if (courseCount[i] > 3) {
            printf("%s (%d courses)\n", students[i], courseCount[i]);
        }
    }

    return 0;
}

