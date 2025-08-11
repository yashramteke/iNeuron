//Q6.Write a program to print the strings which are palindrome in the list of strings.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][20] = {
                        {"star"},
                        {"mom"},
                        {"ajay"},
                        {"dad"},
                        {"zerox"}
                    };

    char tmp[20];

    for(int i = 0; i < 5; i++)
    {
        strcpy(tmp, str[i]);

        if(strcmp(str[i], strrev(tmp)) == 0)
        {
            printf("%s\n", str[i]);
        }
    }
}
