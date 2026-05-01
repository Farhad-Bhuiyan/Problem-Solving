#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 50

typedef struct {
    int id;
    char name[50];
    char classRoutine[100];
    char examRoutine[100];
    float result;
    float paymentDue;
} Student;

Student students[MAX_STUDENTS];
int studentCount = 0;

// Function prototypes
void addStudent();
void displayStudents();
void searchStudent();
void saveData();
void loadData();
void updateStudent();

int main() {
    int choice;
    loadData(); // Load student data from file at the start

    do {
        printf("\n====== Student Portal ======\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Update Student Info\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            updateStudent();
            break;
        case 5:
            saveData(); // Save student data to file before exiting
            printf("Exiting program. Data saved successfully!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Maximum student limit reached.\n");
        return;
    }

    Student newStudent;
    printf("Enter Student ID: ");
    scanf("%d", &newStudent.id);
    printf("Enter Student Name: ");
    scanf(" %[^\n]", newStudent.name);
    printf("Enter Class Routine: ");
    scanf(" %[^\n]", newStudent.classRoutine);
    printf("Enter Exam Routine: ");
    scanf(" %[^\n]", newStudent.examRoutine);
    printf("Enter Result: ");
    scanf("%f", &newStudent.result);
    printf("Enter Payment Due: ");
    scanf("%f", &newStudent.paymentDue);

    students[studentCount++] = newStudent;
    printf("Student added successfully!\n");
}

void displayStudents() {
    if (studentCount == 0) {
        printf("No students available.\n");
        return;
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("ID: %d, Name: %s, Result: %.2f, Payment Due: %.2f\n",
               students[i].id, students[i].name, students[i].result, students[i].paymentDue);
        printf("Class Routine: %s\n", students[i].classRoutine);
        printf("Exam Routine: %s\n\n", students[i].examRoutine);
    }
}

void searchStudent() {
    int id;
    printf("Enter Student ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            printf("ID: %d, Name: %s, Result: %.2f, Payment Due: %.2f\n",
                   students[i].id, students[i].name, students[i].result, students[i].paymentDue);
            printf("Class Routine: %s\n", students[i].classRoutine);
            printf("Exam Routine: %s\n\n", students[i].examRoutine);
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

void updateStudent() {
    int id;
    printf("Enter Student ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            printf("Updating details for ID %d...\n", id);
            printf("Enter New Name: ");
            scanf(" %[^\n]", students[i].name);
            printf("Enter New Class Routine: ");
            scanf(" %[^\n]", students[i].classRoutine);
            printf("Enter New Exam Routine: ");
            scanf(" %[^\n]", students[i].examRoutine);
            printf("Enter New Result: ");
            scanf("%f", &students[i].result);
            printf("Enter New Payment Due: ");
            scanf("%f", &students[i].paymentDue);
            printf("Student updated successfully!\n");
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

void saveData() {
    FILE *file = fopen("students.dat", "wb");
    if (!file) {
        printf("Error saving data.\n");
        return;
    }
    fwrite(&studentCount, sizeof(int), 1, file);
    fwrite(students, sizeof(Student), studentCount, file);
    fclose(file);
}

void loadData() {
    FILE *file = fopen("students.dat", "rb");
    if (!file) {
        printf("No data found. Starting fresh.\n");
        return;
    }
    fread(&studentCount, sizeof(int), 1, file);
    fread(students, sizeof(Student), studentCount, file);
    fclose(file);
}

