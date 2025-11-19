#include <stdio.h>
#include <string.h>

int main() {
    
    char names[][20] = {"Alice", "Bob", "Charlie", "Diana", "Eve"};

    int marks[] = {85, 92, 78, 96, 88};
    
   
    int num_students = sizeof(marks) / sizeof(marks[0]);
    
  
    int max_marks = -1;
    int highest_scorer_index = -1; 
    int total_marks = 0;
   
    printf("Student Marks:\n");
    printf("Name\t\tMarks\n");
    printf("---------------------------\n");
int i;
   
    for (i = 0; i < num_students; i++) {
       
        printf("%s\t\t%d\n", names[i], marks[i]);
        
        if (marks[i] > max_marks) {
            max_marks = marks[i];
            highest_scorer_index = i; 
        total_marks += marks[i];
    }
}
    
    
    printf("\n");
   
    printf("Highest Scorer: %s with %d marks\n", names[highest_scorer_index], max_marks);
    
  
    double average_marks = (double)total_marks / num_students;
    
    printf("Average Marks: %.2lf\n", average_marks);

    return 0;
}

