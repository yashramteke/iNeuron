//Q3. Write a function to display employee data. [ Refer structure from question 1 ]

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

void input(struct Employee *e1);
void display(struct Employee *e);

int main()
{
    struct Employee e;

    input(&e);
    display(&e);

    return 0;
}

void input(struct Employee *e)
{
    printf("Enter Id = ");
    scanf("%d", &e->id);

    fflush(stdin);

    printf("Enter Name = ");
    fgets(e->name, 30, stdin);

    e->name[strlen(e->name)-1] = '\0';

    printf("Enter Salary = ");
    scanf("%f", &e->salary);
};

void display(struct Employee *e)
{
    printf("\n\nEmployee Id = %d\n", e->id);
    printf("Employee Name = %s\n", e->name);
    printf("Employee Salary = %.2f\n", e->salary);
}
