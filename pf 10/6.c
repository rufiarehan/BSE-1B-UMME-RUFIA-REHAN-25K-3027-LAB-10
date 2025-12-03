#include <stdio.h>
#include <string.h>

int main() {
    // Number of students
    int n = 5;

    // Array of student names (strings)
    char students[5][50] = {"Alice", "Bob", "Charlie", "David", "Eva"};
    
    // Array of marks corresponding to students
    int marks[5] = {85, 92, 78, 88, 95};

    // Display header
    printf("Student Marks Table\n");
    printf("-----------------------------\n");
    printf("%-10s | %s\n", "Name", "Marks");
    printf("-----------------------------\n");

    for(int i = 0; i < n; i++) {
        printf("%-10s | %d\n", students[i], marks[i]);
    }

    printf("-----------------------------\n");

    // Find top student
    int maxIndex = 0;
    int total = 0;

    for(int i = 0; i < n; i++) {
        if(marks[i] > marks[maxIndex])
            maxIndex = i;
        total += marks[i];
    }

    // Calculate class average
    float average = total / (float)n;

    printf("Top Student: %s with %d marks\n", students[maxIndex], marks[maxIndex]);
    printf("Class Average: %.2f\n", average);

    return 0;
}



