#include <stdio.h>

int main()
{
    int raw_adc;

    // Display converter header and prompt user for 10-bit ADC value
    printf("\n=========================================\n      10-BIT ADC VOLTAGE CONVERTER\n=========================================");
    printf("\n\nEnter Raw ADC Reading (0 - 1023): ");

    // Validate numeric input and ensure reading is within valid 10-bit range (0-1023)
    if (scanf("%d", &raw_adc) == 1 && raw_adc >= 0 && raw_adc <= 1023)
    {
        // Explicitly typecast raw_adc to float to prevent integer division truncation
        float voltage = ((float)raw_adc / 1023) * 5.0;

        printf("\n[RESULT] Raw ADC: %d -> Sensor Voltage: %.2f V\n\n", raw_adc, voltage);
    }
    else
    {
        printf("\n[ERROR] Invalid ADC reading! Enter a number between 0 and 1023.\n\n");
        return 1;
    }

    return 0;
}