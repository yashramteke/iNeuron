// Q.3) Write a program to count vowels in a given string

#include<stdio.h>
#include<string.h>

int main()
{
    char str[200];
    int count = 0;

    printf("Enter String = ");
    fgets(str,200,stdin);

    for(int i = 0; (str[i] != '\0'); ++i)
    {
        if(str[i]=='a' || str[i]=='A')
            count = count + 1;
        else if(str[i]=='e' || str[i]=='E')
            count = count + 1;
        else if(str[i]=='i' || str[i]=='I')
            count = count + 1;
        else if(str[i]=='o' || str[i]=='O')
            count = count + 1;
        else if(str[i]=='u' || str[i]=='U')
            count = count + 1;
    }

    printf("\nTotal vowels = %d", count);
}
