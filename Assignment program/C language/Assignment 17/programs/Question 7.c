// Q.7) Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>

int main()
{
    char str[200];
    int alph = 0, dgt = 0, spcl = 0, i = 0;

    printf("Enter String = ");
    fgets(str,200,stdin);

    for(;(str[i] != 10) && (str[i] != '\0'); i++)
    {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            alph = alph + 1;
        }
        else if(str[i] >= 48 && str[i] <= 57)
        {
            dgt = dgt + 1;
        }
        else if((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
        {
            spcl = spcl + 1;
        }
    }

    printf("alphabets = %d\n", alph);
    printf("digits = %d\n", dgt);
    printf("special character  = %d\n", spcl);

}
