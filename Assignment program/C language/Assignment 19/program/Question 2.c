//Q2.Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.

#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][20];
    char temp[20];

    for(int i=0; i<10; i++)
    {
        printf("Enter string %d :- ", i);
        gets(name[i]);
    }


    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\n\n");

    for(int i=0; i<10; i++)
    {
        printf("%d) :- ", i);
        puts(name[i]);
    }
}
