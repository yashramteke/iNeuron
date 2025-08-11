//Q1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.

#include <stdio.h>

int main()
{
    char arr[5][30];
    int vowel = 0;

    for(int i = 0 ; i < 5; i++)
    {
        printf("\nEnter String %d = ", i+1);
        gets(arr[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; arr[i][j] != '\0'; j++)
        {
            if( (arr[i][j] == 'A') || (arr[i][j] == 'a') || (arr[i][j] == 'E') ||(arr[i][j] == 'e') ||(arr[i][j] == 'I') ||(arr[i][j] == 'i') ||(arr[i][j] == 'O') ||(arr[i][j] == 'o') ||(arr[i][j] == 'U') ||(arr[i][j] == 'u') )
            {
                vowel++;
            }
        }

        printf("\n%s = %d", arr[i], vowel);

        vowel = 0;
    }
}
