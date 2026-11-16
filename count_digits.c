#include <stdio.h>

int main()
{
    int num, option, count;
    printf("\n-------------------------\n      Digit Counter\n-------------------------\n");

    do
    {
        printf("\n1. Count Numbers\n2. Exit The Program\n\n");
        printf("~ Enter your option: ");

        // for checking if the user enter a number or letters
        if (scanf("%d", &option) != 1)
        {
            printf("\nInvalid input! Please enter a number (1 or 2).\n");
            while (getchar() != '\n'); // for clearing that stuck buffer
            option = 0;                // option reseted into safe value
            continue;                  // loop sended to the next round
        }

        if (option == 1)
        {
            count = 0;
            printf("\n~ Enter a positive number: ");
            
            // same safety check for number input
            if (scanf("%d", &num) != 1)
            {
                printf("\nInvalid input! Only positive integers are allowed.\n");
                while (getchar() != '\n');
                continue;
            }

            while (num > 0)
            {
                num = num / 10;
                count++;
            }

            printf("\n~ Total digits: %d\n", count);
        }
        else if (option == 2)
        {
            printf("\nThanks for using our program!\n\n");
        }
        else
        {
            printf("\nInvalid option! Please choose 1 or 2.\n");
        }

    } while (option != 2);

    return 0;
}