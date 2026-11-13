#include <stdio.h>

int main()
{
    int a;
    int b = 1;
    int c = 2;
    int d = 3;
    int e = 4;
    int f = 5;
    int g = 6;
    int h = 7;
    int i = 8;
    int j = 9;
    int k = 10;
    printf("\n---Enter the number you want multiplication table of :");
    scanf("%d", &a);
    printf("\n%d * %d = %d", a, b, a*b);
    printf("\n%d * %d = %d", a, c, a*c);
    printf("\n%d * %d = %d", a, d, a*d);
    printf("\n%d * %d = %d", a, e, a*e);
    printf("\n%d * %d = %d", a, f, a*f);
    printf("\n%d * %d = %d", a, g, a*g);
    printf("\n%d * %d = %d", a, h, a*h);
    printf("\n%d * %d = %d", a, i, a*i);
    printf("\n%d * %d = %d", a, j, a*j);
    printf("\n%d * %d = %d", a, k, a*k);

    return 0;
}


//This is optimised code of this program =====>>
#include <stdio.h>
int main()
{
    int a;
    int i = 1;
    printf("\n\nEnter a number you want multiplication table of: ");
    scanf("%d", &a);
    do
    {
        printf("\n%d * %d = %d", a, i, a *i);
        i = i + 1;
    } while (i <= 20);
    //this program ends here
    
    return 0;
}
