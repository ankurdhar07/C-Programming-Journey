#include <stdio.h>
int main()
{
    int r;
    float pie = 3.14159;
    int sqare;
    printf("\n\n============== Area Of The Circle ==============\n");
    printf("\nEnter R value: ");
    scanf("%d", &r);
    sqare = r * r;
    printf("\nSo the Area of the circle: %f\n", pie * sqare);
    
    return 0;
}
