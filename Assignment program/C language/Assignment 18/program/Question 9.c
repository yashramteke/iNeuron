/* Q9) Write a function to reverse a string word wise. (For example if the given string is
   “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )*/

#include<stdio.h>

void fun(char str[]);

int main()
{
    char str[200];
    int count = 0;

    printf("Enter String = ");
    fgets(str,200,stdin);

    fun(str);
}

void fun(char str[])
{
    int length = 0;
    char rev[200];

    int start_ptr, traverse_ptr, space_ptr, rev_ptr = 199;

    rev[rev_ptr] = '\0';


    //find length of string
    while(str[length] != '\0')
    {
        length++;
    }

    start_ptr = traverse_ptr = 0 ; //initialize pointer for first word

    while(str[traverse_ptr] != '\0')
    {
        if(str[traverse_ptr] == 32 || str[traverse_ptr] == 10)
        {
            space_ptr = traverse_ptr; // space_pointer point the space

            while(traverse_ptr != start_ptr)
            {
                rev_ptr = rev_ptr - 1;
                rev[rev_ptr] = str[traverse_ptr - 1];
                traverse_ptr = traverse_ptr - 1;
            }
            rev_ptr = rev_ptr - 1;
            rev[rev_ptr] = str[space_ptr];
            start_ptr = traverse_ptr = space_ptr + 1;
        }
        else
        {
            traverse_ptr = traverse_ptr + 1;
        }
    }

    while(rev[rev_ptr] != '\0')
    {
        printf("%c", rev[rev_ptr]);
        rev_ptr = rev_ptr + 1;
    }
}
