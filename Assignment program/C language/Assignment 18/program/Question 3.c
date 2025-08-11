// Q3) Write a function to compare two strings.

#include<stdio.h>

void fun(char [], char []);

int main(int argc, char *argv[])
{
	char str1[150];
    char str2[150];

	printf("enter string 1 :- ");
	fgets(str1,150,stdin);

	printf("enter string 2 :- ");
	fgets(str2,150,stdin);

    fun(str1, str2);

}

void fun(char str1[], char str2[])
{
    int chk = 0;

    for(int i = 0; (str1[i] != '\0') || (str2[i] != '\0'); i++)
    {
        if(str1[i] != str2[i])
        {
            chk = 1;
            break;
        }
    }

    if(chk == 0)
    {
        printf("String is equal");
    }
    else
    {
        printf("String is not equal");
    }
}
