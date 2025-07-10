/**program to accept the total purchase amount and display the final bill using 
a function that takes the amount as a parameter and has no return value.
*/


#include <stdio.h>
void printBill(float amount);  // Takes float parameter, returns nothing
int main() {
    float total;

    printf("Enter the total purchase amount: ");
    scanf("%f", &total);

    printBill(total);

    return 0;
}

// Function definition
void printBill(float amount) {
    float tax = amount * 0.18;      
    float finalAmount = amount + tax;

    printf("\n========= BILL =========\n");
    printf("Purchase Amount : %.2f\n", amount);
    printf("GST (18%%)       : %.2f\n", tax);
    printf("------------------------\n");
    printf("Total Amount    : %.2f\n", finalAmount);
    printf("========================\n");
}
