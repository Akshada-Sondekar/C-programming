
/* Simple shopping cart menu system */
#include <stdio.h>

void displayMenu();

int main() {
    int choice;

    while (1) {
        displayMenu();  

        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You chose: Add Item\n\n");
                break;
            case 2:
                printf("You chose: View Cart\n\n");
                break;
            case 3:
                printf("You chose: Checkout\n\n");
                break;
            case 4:
                printf("Exiting program... Thank you!\n");
                return 0; 
            default:
                printf("Invalid choice. Please try again.\n\n");
        }
    }

    return 0;
}

// No parameters, no return value
void displayMenu() {
    printf("========= MENU =========\n");
    printf("1. Add Item\n");
    printf("2. View Cart\n");
    printf("3. Checkout\n");
    printf("4. Exit\n");
    printf("========================\n");
}

