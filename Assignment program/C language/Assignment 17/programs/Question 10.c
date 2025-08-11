// Q.10) Write a program in C to Find the Frequency of Characters.

#include<stdio.h>

int main()
{
    char str[200], arr[150] = {0};

    printf("Enter String = ");
    fgets(str,200,stdin);

    for(int i = 0; (str[i] != 10) && (str[i] != '\0'); i++)
    {
        arr[str[i]]++;
    }

    for(int i = 0; i<150; i++)
    {
        if(arr[i] != 0)
        {
            printf("%c = %d\n", i, arr[i]);
        }
    }
}
