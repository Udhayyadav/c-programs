#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int rollNo;
    char* name;
    float percentage;
} Student;

int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    // allocate memory for the student details
    Student* students = (Student*)malloc(N * sizeof(Student));

    if (students == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // input the student details
    for (int i = 0; i < N; i++) {
        printf("Enter the details of student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &(students[i].rollNo));

        printf("Name: ");
        students[i].name = (char*)malloc(50 * sizeof(char)); // allocate memory for the name
        scanf("%s", students[i].name);

        printf("Percentage: ");
        scanf("%f", &(students[i].percentage));

        printf("\n");
    }

    // print the student details
    printf("Student Details:\n");
    for (int i = 0; i < N; i++) {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("\n");
    }

    // free the allocated memory
    for (int i = 0; i < N; i++) {
        free(students[i].name);
    }
    free(students);

    return 0;
}