#include <stdio.h>

int main() {
    char names[5][20] = {"Alice", "Bob", "Charlie", "Diana", "Eve"};
    int marks[5] = {85, 92, 78, 96, 88};

    int i;
    int highestIndex = 0;
    float sum = 0;

    printf("Student Marks:\n");
    printf("-----------------------------\n");
    printf("%-10s  %s\n", "Name", "Marks");
    printf("-----------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%-10s  %d\n", names[i], marks[i]);

        sum += marks[i];

        if (marks[i] > marks[highestIndex])
            highestIndex = i;
    }

    float average = sum / 5.0;

    printf("\nTop Student: %s with %d marks\n", names[highestIndex], marks[highestIndex]);
    printf("Class Average: %.2f\n", average);

    return 0;
}

