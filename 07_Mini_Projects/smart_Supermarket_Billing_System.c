#include <stdio.h>
int main()
{
    int choice, quantity;
    printf("\n\n====================================\n       SMART SUPERMARKET MENU\n====================================\n\n");
    printf("1. Milk Packet   - Rs 30\n2. Bread Packet  - Rs 40\n3. Eggs Tray     - Rs 70\n4. Juice Bottle  - Rs 100\n====================================");
    printf("\n\n~ Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4)
    {
        printf("\n\n===================================\n Please enter a number between 1-4!\n===================================");
        return 0;
    }
    


    printf("\n~ Enter quantity: ");
        scanf("%d", &quantity);
    
    if (quantity <= 0)
    {
        printf("\n\n------------------------------------\n    PLEASE ENTER A VAILD NUMBER\n------------------------------------\n\n");
        return 0;
    }
    
    
    if (quantity >= 100)
    {
        printf("\n\n----------------------------------------------\n          MAXIMUN AMOUNT OF NUMBER REACHED\n----------------------------------------------\n\n");
        return 0;
    }

    else if (quantity < 5 )
    {
        switch (choice)
    {
    case 1:
        
        printf("\n\n------------------------------------\n          FINAL INVOICE\n------------------------------------\n\n");
        printf("Item Selected: Milk Packet\n");
        printf("Price per Unit: Rs 30\n");
        printf("Quantity      : %d\n", quantity);
        printf("Total Amount  : Rs %d\n", 30 * quantity);
        printf("------------------------------------\nThank you for shopping with us!\n\n");
        break;
    case 2:

        printf("\n\n------------------------------------\n          FINAL INVOICE\n------------------------------------\n\n");
        printf("Item Selected: Bread Packet\n");
        printf("Price per Unit: Rs 40\n");
        printf("Quantity      : %d\n", quantity);
        printf("Total Amount  : Rs %d\n", 40 * quantity);
        printf("------------------------------------\nThank you for shopping with us!\n\n");
        break;
    case 3:
        
        printf("\n\n------------------------------------\n          FINAL INVOICE\n------------------------------------\n\n");
        printf("Item Selected: Eggs tray\n");
        printf("Price per Unit: Rs 70\n");
        printf("Quantity      : %d\n", quantity);
        printf("Total Amount  : Rs %d\n", 70 * quantity);
        printf("------------------------------------\nThank you for shopping with us!\n\n");
        break;
    case 4:
       
        printf("\n\n------------------------------------\n            FINAL INVOICE\n------------------------------------\n\n");
        printf("Item Selected: Juice Bottle\n");
        printf("Price per Unit: Rs 100\n");
        printf("Quantity      : %d\n", quantity);
        printf("Total Amount  : Rs %d\n", 100 * quantity);
        printf("------------------------------------\nThank you for shopping with us!\n\n");
        break;

    
    
    
    }
    
    
    }
    else if (quantity >= 5)
    {
           switch (choice)
    {
    case 1:
        
        printf("\n\n------------------------------------\n          FINAL INVOICE\n------------------------------------\n\n");
        printf("Item Selected: Milk Packet\n");
        printf("Price per Unit: Rs 30\n");
        printf("Quantity      : %d\n", quantity);
        printf("Original Total: Rs %d\n", 30 * quantity);
        printf("Bulk Discount : Rs %.2f (10%% OFF!)\n", (30 * quantity) * 0.10);
        printf("Final Payable: Rs %.2f\n", (30 * quantity) - ((30 * quantity) * 0.10));
        
        printf("------------------------------------\nThank you for shopping with us!\n\n");
        break;
    case 2:
        
        printf("\n\n------------------------------------\n          FINAL INVOICE\n------------------------------------\n\n");
        printf("Item Selected: Bread Packet\n");
        printf("Price per Unit: Rs 40\n");
        printf("Quantity      : %d\n", quantity);
        printf("Original Total: Rs %d\n", 40 * quantity);
        printf("Bulk Discount : Rs %.2f (10%% OFF!)\n", (40 * quantity) * 0.10);
        printf("Final Payable: Rs %.2f\n", (40 * quantity) - ((40 * quantity) * 0.10));
        printf("------------------------------------\nThank you for shopping with us!\n\n");
        break;
    case 3:
        
        printf("\n\n------------------------------------\n          FINAL INVOICE\n------------------------------------\n\n");
        printf("Item Selected: Eggs tray\n");
        printf("Price per Unit: Rs 70\n");
        printf("Quantity      : %d\n", quantity);
        printf("Original Total: Rs %d\n", 70 * quantity);
        printf("Bulk Discount : Rs %.2f (10%% OFF!)\n", (70 * quantity) * 0.10);
        printf("Final Payable: Rs %.2f\n", (70 * quantity) - ((70 * quantity) * 0.10));
        printf("------------------------------------\nThank you for shopping with us!\n\n");
        break;
    case 4:
        
        printf("\n\n------------------------------------\n          FINAL INVOICE\n------------------------------------\n\n");
        printf("Item Selected: Juice Bottle\n");
        printf("Price per Unit: Rs 100\n");
        printf("Quantity      : %d\n", quantity);
        printf("Original Total: Rs %d\n", 100 * quantity);
        printf("Bulk Discount : Rs %.2f (10%% OFF!)\n", (100 * quantity) * 0.10);
        printf("Final Payable: Rs %.2f\n", (100 * quantity) - ((100 * quantity) * 0.10));
        printf("------------------------------------\nThank you for shopping with us!\n\n");
        break;
    
    
    
    
    }
    
    }
    

    return 0;
}
