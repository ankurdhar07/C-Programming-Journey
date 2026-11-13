#include <stdio.h>
int main()
{
    int Secret_Password = 1234;
    int user_password;
    printf("\n\n=================================\n       SECURE SYSTEM LOGIN\n=================================\n\n");
    do
    {
        printf("Enter Password:");
        scanf("%d", &user_password);
    if (user_password == 1234)
    {
        printf("\n\n---------------------------------\n  Access Granted! Welcome Admin.\n=================================\n\n");
    }
    
    else{
        printf("\n\n------ Invalid Password! Try Again ------\n\n");

    }
        
      
    } while (user_password != Secret_Password);
    
    

    return 0;
}
