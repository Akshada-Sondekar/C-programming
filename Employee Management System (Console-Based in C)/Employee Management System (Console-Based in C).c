#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee {
    int id;
    char name[100];
    float salary;
} Emp;

Emp emps[2];  // Limited to 2 employees as per your array size
int index = 0;
int targetIndex;

// Function declarations
void addEmployee();
void readEmployee();
int checkEmployeeById(int id);
void updateEmployee(); 
void deleteEmployee();

int main() {
    while (1) {
        printf("\n1. Add Employee\n2. Read Employees\n3. Update Employee\n4. Delete Employee\n5. Exit\nEnter your choice: ");
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (index == 2) {
                    printf("Insufficient space! Cannot add more employees.\n");
                } else {
                    addEmployee();
                }
                break;
            case 2:
                readEmployee();
                break;
            case 3:
                updateEmployee();
                break;
            case 4:
                deleteEmployee();
                break;
            case 5:
                printf("\n\t**** THANK YOU FOR USING EMS ****\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

// Add employee
void addEmployee() {
    Emp e;
    int tempId;

    printf("\nEnter Employee ID: ");
    scanf("%d", &tempId);

    if (checkEmployeeById(tempId) == 0) {
        printf("ID already exists! Enter a unique ID.\n");
        return;
    }

    e.id = tempId;

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    emps[index++] = e;

    printf("Employee added successfully!\n");
}

// Read employee info
void readEmployee() {
    if (index == 0) {
        printf("No employee records found.\n");
        return;
    }

    printf("\n--- Employee Records ---\n");
    for (int i = 0; i < index; i++) {
        printf("ID: %d\n", emps[i].id);
        printf("Name: %s\n", emps[i].name);
        printf("Salary: %.2f\n\n", emps[i].salary);
    }
}

// Update employee info
void updateEmployee() {
    int tempId;
    printf("\nEnter Employee ID to Update: ");
    scanf("%d", &tempId);

    if (checkEmployeeById(tempId)) {
        printf("Employee with ID %d not found.\n", tempId);
        return;
    }

    printf("Enter new name: ");
    scanf("%s", emps[targetIndex].name);

    printf("Enter new salary: ");
    scanf("%f", &emps[targetIndex].salary);

    printf("Employee updated successfully!\n");
}

// Delete employee
void deleteEmployee() {
    int tempId;
    printf("\nEnter Employee ID to Delete: ");
    scanf("%d", &tempId);

    if (checkEmployeeById(tempId)) {
        printf("Employee with ID %d not found.\n", tempId);
        return;
    }

    
    for (int i = targetIndex; i < index - 1; i++) {
        emps[i] = emps[i + 1];
    }
    index--;

    printf("Employee deleted successfully!\n");
}

// Checks if employee exists by id
int checkEmployeeById(int id) {
    for (int i = 0; i < index; i++) {
        if (emps[i].id == id) {
            targetIndex = i;
            return 0;  // Found
        }
    }
    return 1;  // Not found
}
