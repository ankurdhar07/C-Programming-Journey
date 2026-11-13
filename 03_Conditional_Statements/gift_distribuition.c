#include <stdio.h>
int main()
{
    int subject;
    printf("\n\n============ Gift Distribution System ============\n\n");
    printf("What Subject Did You Passed in?\n\n");
    printf("1. Maths and Science Both\n");
    printf("2. Only Maths\n");
    printf("3. Only Science\n");
    printf("\n~ Enter Your Choice: ");
    scanf("%d", &subject);

    if (subject <= 2 )
    {
        printf("\n---Yayyyy You won 15 rupees!!!---\n\n");
    }
    
    else if (subject == 3)
    {
        printf("\n---Yayyyy You won 45 rupees!!!---\n\n");
    }
    

    else {
        printf("\n\n---Invalid Input!! Please enter your number correctly :( ---\n\n");
    }


    return 0;
}
