//Q7. Write a program to calculate the difference between two time periods.

#include<stdio.h>

struct Time
{
    int sec;
    int min;
    int hour;
};

void input(struct Time *t1, struct Time *t2)
{
    printf("Enter Hour for t1 = ");
    scanf("%d", &t1->hour);

    printf("Enter Minut for t1 = ");
    scanf("%d", &t1->min);

    printf("Enter Second for t1 = ");
    scanf("%d", &t1->sec);

    printf("\n\nEnter Hour for t2 = ");
    scanf("%d", &t2->hour);

    printf("Enter Minut for t2 = ");
    scanf("%d", &t2->min);

    printf("Enter Second for t2 = ");
    scanf("%d", &t2->sec);
}

void time_arrange(struct Time *t1, struct Time *t2)
{
    while(t1->sec >= 60)
    {
        t1->min = t1->min + 1;
        t1->sec = t1->sec - 60;
    }

    while(t1->min >= 60)
    {
        t1->hour = t1->hour + 1;
        t1->min = t1->min - 60;
    }

    while(t2->sec >= 60)
    {
        t2->min = t2->min + 1;
        t2->sec = t2->sec - 60;
    }

    while(t2->min >= 60)
    {
        t2->hour = t2->hour + 1;
        t2->min = t2->min - 60;
    }
}

void diff(struct Time *t1, struct Time *t2)
{
    printf("\n\nDifference = %d : %d : %d", (t1->hour - t2->hour), (t1->min - t2->min), (t1->sec - t2->sec));
}

void bigger(struct Time *t1, struct Time *t2)
{
     if(t2->hour > t1->hour)
     {
         diff(t2, t1);
     }
     else if(t1->hour > t2->hour)
     {
         diff(t1, t2);
     }
     else if(t2->min > t1->min)
     {
         diff(t2, t1);
     }
     else if(t1->min > t2->min)
     {
         diff(t1, t2);
     }
      else if(t2->sec > t1->sec)
     {
         diff(t2, t1);
     }
     else if(t1->sec > t2->sec)
     {
         diff(t1, t2);
     }
     else
     {
         diff(t1, t2);
     }
}



int main()
{
    struct Time t1, t2;

    input(&t1, &t2);
    time_arrange(&t1, &t2);
    bigger(&t1, &t2);

    return 0;
}
