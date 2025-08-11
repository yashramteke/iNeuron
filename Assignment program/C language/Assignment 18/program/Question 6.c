/* Q6) Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/

#include<stdio.h>

void fun(char str[]);

int main()
{
    char str[200];
    int count = 0;

    printf("Enter String = ");
    fgets(str,200,stdin);

    fun(str);
}

void fun(char str[])
{
    int flag = -1;

    for(int i=0; (str[i] != 10) && (str[i] != '\0'); i++)
    {
        if((str[i] >= 65) && (str[i] <= 90) || (str[i] == 32));
        else if((str[i] >= 97) && (str[i] <= 122));
        else if((str[i] >= 48) && (str[i] <= 57))
        {
            flag = 1;
        }
        else
        {
            printf("This string is not alphanumeric");
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("This string is alphanumeric");
    }
    else if(flag == -1)
    {
        printf("This string is not alphanumeric");
    }

}
