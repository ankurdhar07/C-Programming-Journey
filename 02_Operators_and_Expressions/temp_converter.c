#include <stdio.h>
#include <conio.h>
int main()
{
    //Celsius to Farenheit Converter
    float C, F;
    printf("Enter a temparature in Celsius: ");
    scanf("%f", &C);
    F = (C * 9 / 5) + 32;
    printf("\n%.2f°C = %.2f°F", C, F);

    //Farenheit to Celsius Converter
    printf("\n\nEnter a temparature in Farenheit: ");
    scanf("%f", &F);
    C = (F - 32) * 5/9;
    printf("\n%.2f°F = %.2f°C", F, C);

    return 0;
}


