#include <stdio.h>

int main()
{
    int temp;
    int count = 0; // Tracks total number of valid sensor readings
    int sum = 0;   // Accumulates sum of valid temperatures for averaging

    // Display system header and operating instructions
    printf("\n=========================================\n      EMBEDDED TEMP SENSOR MONITOR\n=========================================\n");
    printf("\n(Enter negative value for glitch | >= 100 to trigger emergency stop)");

    // Continuous monitoring loop until an emergency shutdown is triggered
    while (1)
    {
        printf("\n\n~ Enter temperature reading (C): ");

        // Validate input to reject non-numeric characters and clear input buffer
        if (scanf("%d", &temp) != 1)
        {
            printf("\n[ERROR] Invalid input! Please enter a numeric temperature.\n");
            while (getchar() != '\n');
            continue;
        }

        // Trigger emergency shutdown and exit loop if temperature reaches critical limit
        if (temp >= 100)
        {
            printf("\n[CRITICAL ALERT] Overheating (>= %d C)! Shutting down system...\n\n", temp);
            break;
        }
        // Ignore negative readings as sensor noise/glitches and skip to next iteration
        else if (temp < 0)
        {
            printf("\n[WARNING] Sensor glitch detected! Skipping reading...\n");
            continue;
        }
        // Record normal temperature readings (0 to 99 C) and update counters
        else
        {
            sum = sum + temp;
            count++;
            printf("\n[OK] Valid reading recorded: %d C\n", temp);
        }
    }

    // Display final diagnostic summary after loop termination
    printf("\n--- System Summary ---\n");
    printf("Total Valid Readings : %d\n", count);

    // Calculate and print average temperature safely (preventing division by zero)
    if (count > 0)
    {
        float average = (float)sum / count;
        printf("Average Temperature  : %.2f C\n\n", average);
    }
    else
    {
        printf("Average Temperature  : N/A (No valid readings recorded)\n\n");
    }

    return 0;
}