#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Student {
    char name[50];
    int rollNumber;
    float marks;
} Student;


Student* createStudentArray(int size) {
    Student* students = (Student*)malloc(size * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE); 
    }
    return students;
}


void inputStudentData(Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}


void displayStudentData(Student* students, int size) {
    printf("\n--- Student Database ---\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name: %s\n", students[i].name);
        printf("  Roll Number: %d\n", students[i].rollNumber);
        printf("  Marks: %.2f\n", students[i].marks);
    }
}

void freeStudentArray(Student* students) {
    free(students);
    printf("\nDynamically allocated memory freed.\n");
}

int main() {
    int numStudents;

    
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
  
    Student* studentArray = createStudentArray(numStudents);

    
    inputStudentData(studentArray, numStudents);

    
    displayStudentData(studentArray, numStudents);

    freeStudentArray(studentArray);

    return 0;
}
