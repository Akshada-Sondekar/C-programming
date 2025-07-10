#include <stdio.h>
float withdraw(float balance, float amount);  // With param, returns new balance

int main() {
    float balance = 5000.00; 
    float amount;

    printf("Welcome to ATM\n");
    printf("Your current balance: ₹%.2f\n", balance);
    printf("Enter amount to withdraw: ₹");
    scanf("%f", &amount);

    balance = withdraw(balance, amount);

    printf("Your updated balance: ₹%.2f\n", balance);

    return 0;
}
float withdraw(float balance, float amount) {
    if (amount > balance) {
        printf("❌ Insufficient balance!\n");
        return balance;  
    } else {
        printf("✅ Withdrawal of ₹%.2f successful!\n", amount);
        return balance - amount;
    }
}
