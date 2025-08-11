//Q5.Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[4][40] = {
                            {"jhon45doegmail.com"},
                            {"abc@gmail.com"}
                      };

    char find[20];
    char ch= '@';

    for(int i=0; i<2; i++)
    {
        if(strchr(str[i], '@') != NULL)
        {
            printf("string found");
        }
    }
}
