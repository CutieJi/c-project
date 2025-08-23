#include <stdio.h>

int verifyPIN();
void checkBalance();
void depositMoney();
void withdrawMoney();

float balance = 100000;
int correctPIN = 1111;

int verifyPIN()
{
    int enteredPIN;

    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPIN);

    if (enteredPIN == correctPIN) {
        printf("Access granted.\n");
        return 1;
    } else {
        return 0;
    }
}

void checkBalance()
{
    printf("Your current balance is: PHP%.2f\n", balance);
}

void depositMoney()
{
    float amount;

    printf("Enter deposit amount: PHP");
    scanf("%f", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Deposited successfully. New balance: PHP%.2f\n", balance);
    } else {
        printf("Invalid amount. Deposit failed.\n");
    }
}

void withdrawMoney()
{
    float amount;

    printf("Enter withdraw amount: PHP");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        printf("Withdrawal successful. New balance: PHP%.2f\n", balance);
    } else if (amount > balance)
    {
        printf("Insufficient balance.\n");
    } else {
        printf("Invalid amount. Withdrawal failed.\n");
    }
}

int main()
{
    int attempts = 0;
    int accessGranted = 0;

    while (attempts < 3)
    {
        if (verifyPIN())
        {
            accessGranted = 1;
            break;
        } else
        {
            attempts++;
            printf("Incorrect PIN. Attempts left: %d\n", 3 - attempts);
        }
    }

    if (!accessGranted)
    {
        printf("Too many incorrect attempts. Access denied. Exiting...\n");
        return 0;
    }

    int choice;
    do
    {
        printf("\n===== ATM =====\n");
        printf("1. check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}