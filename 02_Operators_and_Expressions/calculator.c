#include <stdio.h>
int main()
{
    int a, b;
    printf("welcome to my first calculator!!! I made this in C language...\n");
    
    printf("\n---First: sum calculator---");
    printf("\nEnter number A:");
    scanf("%d", &a);

    printf("\nEnter number B:");
    scanf("%d", &b);
    printf("Sum of total numbers is: %d\n", a+b);
    //This this the calculator of sum...


    printf("\n---Second: substracting calculator---\n");
    printf("\nEnter number A:");
    scanf("%d", &a);
    printf("\nEnter number B:");
    scanf("%d", &b);
    printf("Dividing these two numbers: %d\n", a-b);
    //Substraction of two values...

    printf("\n---Third: multiplication calculator---");
    printf("\nEnter number A:");
    scanf("%d", &a);
    printf("\nEnter number B:");
    scanf("%d", &b);
    printf("Multiplication of total numbers: %d\n", a*b);
    //Multiplication calculator...
    
    printf("\n---Forth is deviding calculator---");
    printf("\nEnter number A:");
    scanf("%d", &a);
    printf("\nEnter number B:");
    scanf("%d", &b);
    printf("Diving these two values: %d\n", b/a);
    //Diving these two values...


    return 0;
}
