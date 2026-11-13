#include <stdio.h>
int main()
{
    int ticket;
    printf("\nEnter Your age:");
    scanf("%d", &ticket);

    if (ticket <= 0)
    {
        printf("\nPlease enter a valid age!!\n");
    }
    
    else if (ticket <= 5)
    {
        printf("\n---Sorry You're too young, You can't watch movies---");
    }
    

    else if (ticket <= 12)
    {
        printf("\n--- Ticket Price: 100 Rupees (Child Ticket) ---\n");
    }
    
    else if (ticket <= 21)
    {
        printf("\n--- Ticket Price: 150 Rupees (Student Discount) ---\n");
    }
    
    else if (ticket <= 59)
    {
        printf("\n--- Ticket Price: 250 Rupees (Adult Ticket) ---\n");
    }
    
    else if (ticket <= 130)
    {
        printf("\n--- Ticket Price: 120 Rupees (Senior Citizen Discount) ---\n");
    }
    
    else{

        printf("\n---Sorry You're too old, You can't watch movies---\n");
    }

    return 0;
}
