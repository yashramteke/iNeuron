//Q9.Write a program that asks the user to enter a username.
//If the username entered is one of the names in the list then the user is allowed to calculate the factorial of a number.
//Otherwise, an error message is displayed

#include <stdio.h>
#include <string.h>

void fact(void);

int main()
{
    char str[5][20] = {
                        {"ajay145"},
                        {"rakesgh851"},
                        {"suraj441"},
                        {"ram4110"},
                        {"kishor6321"}
                      };

    char username[20];
    int flag = 1;

    printf("Enter Username : ");
    scanf("%s",username);

    for(int i = 0; i < 5; i++)
    {
        if(!strcmp(str[i], username))
        {
            fact();
            flag = 0;
        }
    }

    if(flag == 1)
    {
        printf("Username not found");
    }
}

void fact(void)
{
    int num = 0, ans = 1;

    printf("Enter number for factorial : ");
    scanf("%d", &num);

    int tmp = num;

    while(tmp)
    {
        ans = (ans * tmp);
        tmp--;
    }


    printf("Factorial of %d : %d", num, ans);

}
