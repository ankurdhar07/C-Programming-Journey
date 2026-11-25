#include <stdio.h>

int main()
{
    int step;

    // Display program header and prompt user for PWM step size
    printf("\n=========================================\n      PWM LED BRIGHTNESS RAMP            \n=========================================\n");
    printf("\n~ Enter Duty Cycle Step Size (1 - 100): ");

    // Validate numeric input and ensure step size is between 1 and 100
    if (scanf("%d", &step) != 1 || step < 1 || step > 100)
    {
        printf("\n[ERROR] Invalid step size! Enter a number between 1 and 100.\n\n");
        return 1;
    }

    printf("\n");

    // Ramp PWM duty cycle from 0% up to 100% and display brightness status
    for (int duty = 0; duty <= 100; duty += step)
    {
        printf("[PWM] Duty Cycle: %3d%% -> ", duty);

        if (duty == 0)
        {
            printf("LED OFF\n");
        }
        else if (duty <= 30)
        {
            printf("Dim\n");
        }
        else if (duty <= 60)
        {
            printf("Medium\n");
        }
        else if (duty < 100)
        {
            printf("Bright\n");
        }
        else
        {
            printf("Max Brightness\n");
        }
    }

    printf("\n[DONE] PWM Ramp Complete!\n\n");

    return 0;
}