//Q7. Write a program to count the number of vowels and consonants in a string using a pointer.

#include <stdio.h>
#include <conio.h>

int main()
{
    char str[20];
    char *ptr = str;
    int i = 0, vowel = 0, space = 0;

    printf("Enter String = ");
    fgets(str, 20, stdin);

    for(; ptr[i]; i++)
    {
        if(ptr[i] == ' ')
        {
            space++;
        }
        else if((ptr[i] == 'a') || (ptr[i] == 'A') || (ptr[i] == 'e') || (ptr[i] == 'E') || (ptr[i] == 'i') || (ptr[i] == 'I') || (ptr[i] == 'o') || (ptr[i] == 'O') || (ptr[i] == 'u') || (ptr[i] == 'U'))
        {
            vowel++;
        }
    }

    printf("\nvowels = %d & consonants = %d\n", vowel, (i - space - 1)-vowel);

}
