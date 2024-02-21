#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define MAXN 50

struct employee {
	char code[8];
	char name[20];
	double salary;
	double allowance;
};
typedef struct employee Employee;

int menu(){
	printf("========================================================================\n");
	printf("1.Adding a new employee\n");
	printf("2.Find data about employees using a name inputted\n");
	printf("3.Remove an employee based on a code inputted\n");
	printf("4.Print the list in descending order based on salary + allowance.\n");
	printf("0.exit");
	printf("enter your choise:");
	int c;
	scanf("%d",&c);
	return c;
}

void add_employee(Employee** employees, int* num_employees) {
    if (*num_employees >= MAXN) {
        printf("Maximum number of employees reached!\n");
        return;
    }
    Employee new_employee;
    printf("Enter employee code: ");
    scanf("%s", new_employee.code);
    printf("Enter employee name: ");
    scanf(" %[^\n]s", new_employee.name); 
    printf("Enter salary: ");
    scanf("%lf", &new_employee.salary);
    printf("Enter allowance: ");
    scanf("%lf", &new_employee.allowance);
    (*employees)[*num_employees] = new_employee;
    (*num_employees)++;
    printf("Employee added successfully!\n");
}

void find_employee_by_name(Employee* employees, int num_employees) {
    char name[20];
    printf("Enter employee name to search: ");
    scanf(" %[^\n]s", name);

    int found = 0;
    int i;
    for (i = 0; i < num_employees; i++) {
        if (strcmp(employees[i].name, name) == 0) {
          	printf("Employee found:\n");
            printf("Code: %s\n", employees[i].code);
            printf("employee name: %s\n",employees[i].name);
            printf("salary : %lf\n",employees[i].salary);
            printf("allowance: %lf\n",employees[i].allowance);
           	found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee not found!\n");
    }
    return;
}

void remove_employee_by_code(Employee** employees, int* num_employees) {
    char code[8];
    printf("Enter the employee code to remove: ");
    scanf("%s", code);
    int found = 0;
    int index = -1;
    int i;
    for (i = 0; i < *num_employees; i++) {
        if (strcmp((*employees)[i].code, code) == 0) {
            found = 1;
            index = i;
            break;
        }
    }
    if (!found) {
        printf("Employee with code %s not found!\n", code);
        return;
    }
    (*employees)[index] = (*employees)[(*num_employees) - 1];
    (*num_employees)--;

    printf("Employee removed successfully!\n");
}

void sort_employees_by_total(Employee* employees, int num_employees) {
	int i,j;
    for (i = 0; i < num_employees - 1; i++) {
        for (j = 0; j < num_employees - i - 1; j++) {
            double total_j = employees[j].salary + employees[j].allowance;
            double total_j_plus_1 = employees[j + 1].salary + employees[j + 1].allowance;

            if (total_j < total_j_plus_1) {
                Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }

    printf("Employees sorted by total salary + allowance (descending):\n");
    for (i = 0; i < num_employees; i++) {
        printf("Code: %s, Name: %s, Total: %.2lf\n",
               employees[i].code, employees[i].name,
               employees[i].salary + employees[i].allowance);
    }
}

int main(){
	int num_employees = 0;
	Employee* employees = (Employee*)malloc(MAXN*sizeof(Employee));
	if (employees == NULL) {
        printf("Error allocating memory!\n");
        return 1; 
    }

    int choice;
    do {
        choice = menu(); 

        switch (choice) {
            case 1: 
                if (num_employees < MAXN) {
                    add_employee(&employees, &num_employees); 
                } else {
                    printf("Employee limit reached!\n");
                }
                break;
            case 2:{
            	find_employee_by_name(employees,num_employees);
				break;
			}
			case 3:{
				remove_employee_by_code(&employees, &num_employees);
				break;
			}
			case 4:{
				sort_employees_by_total(employees,num_employees);
				break;
			}
            case 0:
                printf("Exiting...\n");
                break;
            default: 
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
    free(employees);
	return 0;
}
