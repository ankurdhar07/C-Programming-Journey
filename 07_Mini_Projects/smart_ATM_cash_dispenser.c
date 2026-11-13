#include <stdio.h>
int main()
{
    int amount, choice;
    int notes500, notes100, rem_amount;
    printf("\n\n\t======= SMART ATM CASH DISPENSER =======\n");
    printf("\n~ Enter withdrawal amount (in multiples of 100): ");
    scanf("%d", &amount);
    if (amount < 100)
    {
      printf("\nError: Amount must be at least 100\n\n");
    }
     
    else if (amount % 100 != 0)
    {
        printf("\nError: Amount is not multiple of 100!\n\n");
    }
    
    else
    {
        printf("\n**How do you like your cash?\n\n1. Maximize Rs 500 Notes\n2. All Rs 100 Notes\n\n~ Enter your choice (1 or 2): ");
        scanf("%d", &choice);
        // validation check done in this point
    
    
    switch (choice)
    {
    case 1:
        notes500 = amount / 500;
        rem_amount = amount % 500;
        notes100 = rem_amount / 100;
        printf("\n--- CASH DISPENSED ---\n\n");
        printf("~ Rs 500 notes = %d\n", notes500);
        printf("~ Rs 100 notes = %d", notes100);
        break;

    case 2:
        notes100 = amount / 100;
        printf("\n\n--- CASH DISPENSED ---\n");
        printf("\n~ Rs 100 notes = %d\n\n", notes100);
        break;
    

    default:
        printf("\n\n=== INVALID CHOICE! PLEASE ENTER BETWEEN 1 OR 2! ===\n");
    }
    }
    
    return 0;
}
