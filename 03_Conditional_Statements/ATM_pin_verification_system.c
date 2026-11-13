#include <stdio.h>
int main()
{
    int secret_pass = 1111;
    int user_input;
    int attempt = 5;
    printf("\n\n=================================\n     PIN VERIFICATION SYSTEM\n=================================");
    printf("\n---------------------------------------\n      You have 5 attempt to login\n---------------------------------------");
    printf("\n\n~ Enter your 4-digit PIN: ");
    scanf("%d", &user_input);

    while (secret_pass != user_input && attempt > 1)
    {
        attempt = attempt - 1;
            printf("\n-> Wrong PIN! Attempts left: %d\n", attempt);
            printf("\n~ Enter your 4-digit PIN: ");
            scanf("%d", &user_input);      
    }

    if (user_input == secret_pass)
        {
            printf("\n🎉 Access Granted! Welcome back.\n\n");
        }
    
    else
    {
        printf("\n\n❌ Account Locked! Too many wrong attempts.\n\n");
    }

    return 0;
}
