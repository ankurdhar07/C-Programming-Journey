#include <stdio.h>

int main()
{
    int cycles, i;
    printf("\n=========================================\n       MCU GPIO LED BLINK SIMULATOR\n=========================================\n");
    // User input of blink lights
    printf("\nEnter number of blink cycles: ");
    if (scanf("%d", &cycles) != 1|| cycles <= 0)
    {
        // Error handling: Checks if input is non-numeric (alphabets/symbols) OR <= 0
        printf("\n[ERROR] Invalid input! Please enter a positive integer greater than 0.\n\n");
        while(getchar() != 'n'); // Clears invalid characters from input buffer
        return 1; // Exits program safely with error code 1
    }
    
    // Printing before the loop starts
    printf("\nStarting LED Sequence...\n");

    // Given [expression 1; expression 2; expression 3]
    for (i = 1; i <= cycles ; i++)
    {
        // Checking if the number even or odd, and checks the remainder if 0 or not
        if (i % 2 == 0)
        {
            printf("\n~ Cycle %d: LED ON -> LED OFF  [Status: High Intensity]\n", i);
        }

        else{

            printf("\n~ Cycle %d: LED ON -> LED OFF  [Status: Normal Intensity]\n", i);
        }
    
    }

    // After getting condition false, the loop breaks and print the total number of cycles executed 
    printf("\nSequence Complete! Total %d cycles executed.\n\n", cycles);
    
    

    return 0;
}
