#include <stdio.h>
int main()
{
    int sum = 0;
    int i;
    do
    {
        printf("\nEnter a number (0 to stop): ");
        scanf("%d", &i);
        sum = sum + i;
    } while (i != 0);
    
    printf("%d", sum);
    return 0;
}
