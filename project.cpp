#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100

// Define a struct for storing student information
struct Student {
    int id;
    char name[MAX_NAME_LENGTH];
    int age;
    float grade;
};

// Function to display student information
void displayStudent(struct Student s) {
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Grade: %.2f\n\n", s.grade);
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents, i;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);  // Take input including spaces

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Grade: ");
        scanf("%f", &students[i].grade);
    }

    printf("\nDisplaying student information:\n");
    for (i = 0; i < numStudents; i++) {
        displayStudent(students[i]);
    }

    return 0;
}