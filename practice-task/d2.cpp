#include <stdio.h>

int main() {
    int option;
    float amount, balance = 50000; 
    char recipient[20];

    
    printf("Select an option:\n");
    printf("1. Airtime Recharge\n");
    printf("2. Internet Bundle \n");
    printf("3. Mobile Money Transfer\n");
    printf("4. Check Balance\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    switch (option) {
        case 1: 
            printf("Enter amount for airtime recharge: ");
            scanf("%f", &amount);
            if (amount > 0) {
                printf("airtime recharge of %.2f frw. confirmed .\n", amount);
            } else {
                printf("Invalid amount. Please enter a valid number.\n");
            }
            break;

        case 2: 
            printf("Enter amount for internet bundle: ");
            scanf("%f", &amount);
            if (amount >= 500) {
                printf("Internet bundle  for %.2ffrw.\n", amount);
            } else {
                printf("Amount must be at least 500 to have a valid bundle.\n");
            }
            break;

        case 3: 
            printf("Enter recipient's phone number: ");
            scanf("%s", recipient);
            printf("Enter amount to transfer: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance) {
                printf(" Sent %.2f frw. to %s.\n", amount, recipient);
                balance -= amount;
            } else {
                printf("nvalid transfer amount or insufficient balance.\n");
            }
            break;

        case 4: 
            printf("Your current balance is %.2f frw.\n", balance);
            break;

        default:
            printf("nvalid option. Please select a valid service (1-4).\n");
    }

    return 0;
}
