#include <stdio.h>
int main()
{
    int choice, quantity, total;

    printf("\n\n===  COLLEGE CAFETERIA MENU  ===\n");
    printf("\n1. Pizza - Rs 120\n");
    printf("2. Burger - Rs 60\n");
    printf("3. Cold Coffie - Rs 40\n");
    printf("4. Exit\n");
    printf("\n~ Now please select between these options: ");
    scanf("%d", &choice);
    
    switch (choice)
    {
    case 1:
        printf("\n~ Now tell us how many quantities do you want: ");
        scanf("%d", &quantity);
        printf("\n-> Your total bill is Rs %d\n\n", 120 * quantity);
        break;
    
    case 2:
        printf("\n~ Now tell us how many quantities do you want: ");
        scanf("%d", &quantity);
        printf("\n-> Your total bill is Rs %d\n\n", 60 * quantity);
        break;
   
    case 3:
        printf("\n~ Now tell us how many quantities do you want: ");
        scanf("%d", &quantity);
        printf("\n-> Your total bill is Rs %d\n\n", 40 * quantity);
        break;
    
    case 4:
        printf("\nThank you for visiting! Have a great day...\n");
        break;
    
    
    default:
    printf("\n---- Please choose number between 1-4!! ----\n\n");
        break;
    }
    
    
    return 0;
}
