#include <stdio.h>

// 1. Without arguments and without return value
void print_header()
{
    printf("\n=========================================\n       C FUNCTION TYPES DEMONSTRATION    \n=========================================\n");
}

// 2. With arguments and without return value
void print_divider(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
}

// 3. Without arguments and with return value
int take_number()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

// 4. With arguments and with return value
int total_sum(int a, int b)
{
    return a + b;
}

int main()
{
    int first_num, second_num, sum;

    // Type 1 call
    print_header();

    // Type 3 call (taking both numbers using the same function!)
    printf("\n[First Input]  ");
    first_num = take_number();

    printf("[Second Input] ");
    second_num = take_number();

    // Type 4 call
    sum = total_sum(first_num, second_num);

    printf("\n");
    // Type 2 call
    print_divider(41);
    printf("The sum of %d and %d is: %d\n", first_num, second_num, sum);
    print_divider(41);
    printf("\n");

    return 0;
}