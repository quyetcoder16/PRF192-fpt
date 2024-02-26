#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

void addStudent(char students[][MAX_NAME_LENGTH], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("The list is full. Cannot add more students.\n");
        return;
    }

    char name[MAX_NAME_LENGTH];
    scanf(" %[^\n]s", name);
	int i;
    for (i = 0; name[i] != '\0'; i++) {
        name[i] = toupper(name[i]);
    }

    int j = 0;
    for (i = 0; name[i] != '\0'; i++) {
        if (!(name[i] == ' ' && (i == 0 || name[i - 1] == ' '))) {
            students[*count][j++] = name[i];
        }
    }
    students[*count][j] = '\0';
    (*count)++;
}

void removeStudent(char students[][MAX_NAME_LENGTH], int *count) {
    if (*count == 0) {
        printf("The list is empty. Cannot remove a student.\n");
        return;
    }

    char name[MAX_NAME_LENGTH];
    scanf(" %[^\n]s", name);
	int i,j;
    for (i = 0; i < *count; i++) {
        if (strcmp(students[i], name) == 0) {
            for (j = i; j < *count - 1; j++) {
                strcpy(students[j], students[j + 1]);
            }
            (*count)--;
            printf("Student '%s' removed successfully.\n", name);
            return;
        }
    }

    printf("Student '%s' not found in the list.\n", name);
}

void searchStudent(char students[][MAX_NAME_LENGTH], int count) {
    if (count == 0) {
        printf("The list is empty. Cannot search for a student.\n");
        return;
    }

    char name[MAX_NAME_LENGTH];
    scanf(" %[^\n]s", name);
	int i;
    for (i = 0; name[i] != '\0'; i++) {
        name[i] = toupper(name[i]);
    }

    for ( i = 0; i < count; i++) {
        if (strcmp(students[i], name) == 0) {
            printf("Student '%s' found at position %d.\n", name, i + 1);
            return;
        }
    }

    printf("Student '%s' not found in the list.\n", name);
}

void sortStudents(char students[][MAX_NAME_LENGTH], int count) {
	int i,j;
    for ( i = 0; i < count - 1; i++) {
        for ( j = i + 1; j < count; j++) {
            if (strcmp(students[i], students[j]) > 0) {
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, students[i]);
                strcpy(students[i], students[j]);
                strcpy(students[j], temp);
            }
        }
    }
    printf("List sorted in ascending order.\n");
}

void printStudents(char students[][MAX_NAME_LENGTH], int count) {
    if (count == 0) {
        printf("The list is empty.\n");
        return;
    }

    printf("List of students:\n");
    int i;
    for (i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, students[i]);
    }
}

int main() {
    char students[MAX_STUDENTS][MAX_NAME_LENGTH];
    int count = 0;
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1- Add a student\n");
        printf("2- Remove a student\n");
        printf("3- Search a student\n");
        printf("4- Print the list in ascending order\n");
        printf("5- Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                removeStudent(students, &count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                sortStudents(students, count);
                printStudents(students, count);
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}

