#include <stdio.h>
int main(int argc, char const *argv[])
{
    int target = 1000;
    int total_saved = 0;
    int add_money;
    printf("\n\n=================================\n     SAVINGS TARGET TRACKER\n=================================\n");
    printf("Target: ₹%d | Current Balance: ₹%d", target, total_saved);
    while (total_saved < target)
    {

        printf("\n\nEnter amount to save: ");
        scanf("%d", &add_money);
        total_saved = total_saved + add_money;
        printf("\n-> Total Saved: %d | Still needed: %d\n", total_saved, target - total_saved);

    }
    
    printf("\n\n🎉 Target Achieved! You saved ₹1000!\n\n\n");

    return 0;
}
