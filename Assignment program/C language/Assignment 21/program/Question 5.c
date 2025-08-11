//Q5. Write a function to sort employees according to their salaries [ refer structure from question 1]

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
void sort_e(struct Employee e[], int size);

int main()
{
    struct Employee e[10];

    input(e, 10);
    sort_e(e, 10);

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

void sort_e(struct Employee e[], int size)
{


    for(int i = 0; i < (size-1); i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(e[i].salary > e[j].salary)
            {
                struct Employee tmp = e[j];
                e[j] = e[i];
                e[i] = tmp;
            }
        }
    }

    for(int i = 0; i < size; i++)
    {
        printf("Employee Id = %d\n", e[i].id);
        printf("Employee Name = %s\n", e[i].name);
        printf("Employee Salary = %f\n\n", e[i].salary);
    }

}
