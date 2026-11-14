#include<stdio.h>

int main()
{
    char signal;
    printf("\n========================================\n        TRAFFIC LIGHT SIMULATOR\n========================================");
    printf("\nEnter the signal color (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &signal);

        switch (signal)
        {
        case 'R':
        case 'r':
            printf("\n[STOP] Red Light! Please stop your vehicle immediately.\n\n");
            break;
        
        case 'Y':
        case 'y':
            printf("\n[READY] Yellow Light! Slow down and prepare to stop.\n\n");
            break;

        case 'G':
        case 'g':
            printf("\n[GO] Green Light! You can safely proceed.\n\n");
            break;
        default:
            printf("\n[ERROR] Invalid color code entered! Please check the rules.\n\n");
        }
    
    return 0;
}
