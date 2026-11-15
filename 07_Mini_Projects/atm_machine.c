#include <stdio.h>

int main()
{
    int choice, amount;
    int balance = 5000;
    printf("\n============================ \n     WELCOME TO MINI ATM\n============================\n\n");

    do
    {
        printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n\n");
        printf("~ Enter Your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nYou Have %d₹ Balance in Your Account\n\n", balance);
        }

        else if (choice == 2)
        {
            printf("\n~ Enter Your Deposit Amount: ");
            scanf("%d", &amount);
            if (amount > 0)
            {
                if (amount >= 100 && amount <= 100000)
                {
                    printf("\n--------------------------\n   Deposit Sucessfull !\n--------------------------\n");
                    balance = balance + amount;
                    printf("\nYour New Balance is ~ %d₹\n\n", balance);
                }

                else
                {
                    printf("\n~ Please Enter Deposit amount between 100₹ to 1 lakh\n\n");
                }
            }

            else
            {
                printf("\n------------ Invalid Input ! ------------\n\n");
            }
        }

        else if (choice == 3)
        {
            printf("\n~ Enter Your Withdrawal Amount: ");
            scanf("%d", &amount);
            if (amount >= 100 && amount <= 100000)
            {
                if (amount <= balance)
                {
                    printf("\n---------------------------------\n     Withdrawal Succesfull !\n---------------------------------\n\n");
                    balance = balance - amount;
                    printf("Remaining Balance ~ %d₹\n\n", balance);
                }

                else
                {
                    printf("\n~ Insufficient Balance!\n\n");
                }
            }

            else
            {
                printf("\n------------ Invalid Input ! ------------\n");
                printf("\n~ Minimum Withdrawal Amount is 100₹\n\n");
            }
        }

        else if (choice == 4)
        {
            printf("\n~ Thanks For Your Using Our ATM !\n\n");
        }

        else
        {
            printf("\n=========================================\n    Choose options between 1 to 4 !! \n=========================================\n\n");
        }

    } while (choice != 4);

    return 0;
}
