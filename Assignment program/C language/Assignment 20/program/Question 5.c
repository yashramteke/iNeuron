//Q5. Write a program to find the maximum number between two numbers using a pointer

#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2;

    printf("Enter Number for num1 & num2 = ");
    scanf("%d%d", &num1, &num2);

    int *p1 = &num1, *p2 = &num2;

    if(*p1 > *p2)
        printf("%d is greater", *p1);
    else if(*p1< *p2)
        printf("%d is greater", *p2);
    else
        printf("Both %d and %d are same", *p1, *p2);

}
