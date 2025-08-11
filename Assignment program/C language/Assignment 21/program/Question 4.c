//Q4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

void input(struct Employee e[], int size);
void high(struct Employee e[], int size);

int main()
{
    struct Employee e[10];

    input(e, 10);
    high(e, 10);

    return 0;
}

void input(struct Employee e[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d) Enter Employee id, name, salary = ", i+1);

        scanf("%d", &e[i].id);

        fflush(stdin);

        fgets(e[i].name, 30, stdin);
        e[i].name[strlen(e[i].name)-1] = '\0';

        scanf("%f", &e[i].salary);
    }
}

void high(struct Employee e[], int size)
{
    int i = 0;

    for(int j = 1; j < size;)
    {
        if(e[i].salary > e[j].salary)
        {
            j++;
        }
        else
        {
            i = j;
            j++;
        }
    }

    printf("\n\nHighest Salary Employee \n\n");

    printf("Employee Id = %d\n", e[i].id);
    printf("Employee Name = %s\n", e[i].name);
    printf("Employee Salary = %f\n", e[i].salary);
}
