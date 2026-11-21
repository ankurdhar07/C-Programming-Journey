#include <stdio.h>

int main()
{
    int status;

    // Display boot diagnostic header and instructions
    printf("\n=========================================\n       MCU SYSTEM BOOT DIAGNOSTICS\n=========================================\n\n");
    printf("Enter status (1 = OK, 0 = FAIL)\n\n");

    // Step 1: Verify battery voltage status; jump to fault handler on failure
    printf("[1/2] Battery Check : ");
    if (scanf("%d", &status) != 1 || status != 1)
    {
        goto system_fault;
    }
    printf("-> Battery OK.\n\n");

    // Step 2: Verify sensor connection; jump to fault handler on failure
    printf("[2/2] Sensor Check  : ");
    if (scanf("%d", &status) != 1 || status != 1)
    {
        goto system_fault;
    }
    printf("-> Sensor OK.\n\n");

    // Proceed to normal firmware boot if all hardware checks pass
    printf("[SUCCESS] Booting Main Firmware...\n\n");
    return 0;

    // Emergency fault recovery label for critical boot failures
system_fault:
    printf("\n[CRITICAL FAULT] Boot aborted! Entering safe mode...\n\n");
    return 1;
}