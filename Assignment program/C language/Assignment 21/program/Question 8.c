//Q8. Write a program to store information of 10 students and display them using structure

#include<stdio.h>

struct Student
{
    char name[30];
    int age;
    int std;
};

int main()
{
    struct Student stu[10];

    for(int i = 0; i < 10; i++)
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

    for(int i = 0; i < 10; i++)
    {
        printf("Student %d\n\n", i+1);

        printf("Student name = %s", stu[i].name);
        printf("Student age = %d\n", stu[i].age);
        printf("Student standard = %d\n\n", stu[i].std);
    }
}
