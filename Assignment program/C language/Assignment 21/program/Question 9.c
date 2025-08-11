//Q9. Write a program to store information of n students and display them using structure

#include<stdio.h>

struct Student
{
    char name[30];
    int age;
    int std;
};

int main()
{
    int n;

    printf("How many student details you want to enter = ");
    scanf("%d", &n);

    struct Student stu[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter Student %d Details\n\n", i+1);

        fflush(stdin);

        printf("Enter student name = ");
        fgets(stu[i].name, 30, stdin);

        printf("Enter student age = ");
        scanf("%d", &stu[i].age);

        printf("Enter student standard = ");
        scanf("%d", &stu[i].std);

        printf("\n\n");
    }

    printf("\n\n---------------------Display Student Details---------------------\n\n");

    for(int i = 0; i < n; i++)
    {
        printf("Student %d\n\n", i+1);

        printf("Student name = %s", stu[i].name);
        printf("Student age = %d\n", stu[i].age);
        printf("Student standard = %d\n\n", stu[i].std);
    }
}
