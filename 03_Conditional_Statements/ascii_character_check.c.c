#include <stdio.h>

int main()
{
    char ch;

    // Prompt user to enter a single character
    printf("\nEnter a character: ");

    // Validate character input
    if (scanf(" %c", &ch) != 1)
    {
        printf("\n[ERROR] Invalid input!\n\n");
        return 1;
    }

    // Check if the entered character matches ASCII value 38 ('&')
    if (ch == 38)
    {
        printf("\n[MATCH] Symbol '&' (ASCII 38) entered!\n\n");
    }
    else
    {
        printf("\n[INFO] Different character entered: '%c' (ASCII %d)\n\n", ch, ch);
    }

    return 0;
}