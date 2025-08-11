// Q2) Write a function to reverse a string.

#include<stdio.h>

char* fun(char []);

char rev[150];

int main(int argc, char *argv[])
{
	char str[150];

	printf("enter string :- ");
	fgets(str,150,stdin);

	char* rev = fun(str);

	printf("%s\t",rev);

}

char* fun(char str[])
{
    int i = 0;

    for(;(str[i]!=10) && (str[i]!='\0');i++);

    for(int j = 0; i>=0;i--,j++)
    {
        rev[j]=str[i];
    }

    return(rev);
}
