// Q.2) Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>

int main()
{
    char str[20];
    char store[20];
    int count = 0;

    printf("Enter String = ");
    fgets(str,20,stdin);

    for(int i=0; (str[i] != 10) && (str[i] != '\0'); i++)
    {
        if(str[i] != store[i])
        {
            store[i] = str[i];
            count = count + 1;

            for(int j=i+1; (str[j] != 10) && (str[j] != '\0'); j++)
            {
                if(str[i] == str[j])
                {
                    store[j] = str[j];
                    count = count + 1;
                }
            }
            printf("%c = %d\n", str[i], count);
            count = 0;
        }
    }
}
