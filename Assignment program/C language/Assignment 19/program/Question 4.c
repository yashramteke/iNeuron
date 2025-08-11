//Q4.Write a program to search a string in the list of strings.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[4][20] = {
                            {"hii, how are you ?"},
                            {"I am fine....."},
                            {"What is your name ?"},
                            {"come here please.........!!"}
                        } ;

    char find[20];
    int flag = 0;

    printf("Enter string to search = ");
    gets(find);

    for(int i=0; i<4; i++)
    {
        if(strcmp(str[i], find))
        {
            flag = 0;
        }
        else
        {
            printf("string found");
            flag = 1;
        }
    }

    if(flag == 0)
    {
        printf("string not found");
    }
}
