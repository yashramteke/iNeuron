// Q.9) Write a C program to sort a string array in ascending order.

#include<stdio.h>

int main()
{
    char str[200];


    printf("Enter String = ");
    fgets(str,200,stdin);


    for(int i = 0; (str[i] != 10) && (str[i] != '\0'); i++)
    {

        for(int j = i + 1; (str[j] != 10) && (str[j] != '\0'); j++)
        {
            if(str[i] > str[j])
            {
                char tmp = str[j];
                str[j] = str[i];
                str[i] = tmp;
            }
        }
    }

    printf("%s",str);

}
