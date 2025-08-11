// Write a function to find the repeated character in a given string.

#include<stdio.h>

void fun(char []);

int main(int argc, char *argv[])
{
	char str[150];

	printf("enter string :- ");
	fgets(str,150,stdin);

	fun(str);
}

void fun(char str[])
{
    char tmp[200];
    int trv, flag = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        trv = i + 1;
        if(str[i] == tmp[i])
        {
        }
        else
        {
            while(str[trv] != '\0')
            {
                if(str[i] == str[trv])
                {
                    tmp[trv] = str[trv];
                    trv++;
                    flag = 1;
                }
                else
                {
                    trv++;
                }
            }
            if(flag == 1)
            {
                printf("\n%c ", str[i]);
            }
            flag = 0;
        }
    }
}
