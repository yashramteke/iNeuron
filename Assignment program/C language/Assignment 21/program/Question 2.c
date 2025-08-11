//Q2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

void input(struct Employee *e1);

int main()
{
    struct Employee e;

    input(&e);

    return 0;
}

void input(struct Employee *e)
{
    printf("Enter Id = ");
    scanf("%d", &e->id);

    fflush(stdin);

    printf("Enter Name = ");
    fgets(e->name, 20, stdin);

    e->name[strlen(e->name)-1] = '\0';

    printf("Enter Salary = ");
    scanf("%f", &e->salary);
};
