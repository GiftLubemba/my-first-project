#include <stdio.h>
#include <limits.h> // For INT_MAX and INT_MIN

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    if (numStudents <= 0) {
        printf("Number of students must be positive.\n");
        return 1; // Indicate an error
    }

    float marks;
    float sumMarks = 0;
    float highestMark = INT_MIN; // Initialize with the smallest possible integer value
    float lowestMark = INT_MAX;  // Initialize with the largest possible integer value

    for (int i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks);

        sumMarks += marks;

        if (marks > highestMark) {
            highestMark = marks;
        }

        if (marks < lowestMark) {
            lowestMark = marks;
        }
    }

    float averageMarks = sumMarks / numStudents;

    printf("\n--- Mark Analysis ---\n");
    printf("Average marks: %.2f\n", averageMarks);
    printf("Highest mark: %.2f\n", highestMark);
    printf("Lowest mark: %.2f\n", lowestMark);

    return 0;
}
