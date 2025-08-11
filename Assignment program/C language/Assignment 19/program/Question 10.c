//Q10. Create an authentication system. It should be menu driven.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void display(void);
int checkUsername(void);
int checkPassword(void);
void login(void);
void create(void);
void update(void);
void del(void);

int arrayEmpty = 0, flag = 0, chkPass = 0;


char username[5][20];
int ptr = 0;
char password[5][25];

char username_input[50];
char password_input[50];

int main()
{
    while(1)
    {
        display();
    }
}

void display(void)
{
    int choice;

    printf("-----------------------Authentication System------------------\n\n");
    printf("\t\t1) Log In\n");
    printf("\t\t2) Create New Username And Password\n");
    printf("\t\t3) Upadate Username And Password\n");
    printf("\t\t4) Delete Username And Password\n");
    printf("\t\t5) Exit\n");
    printf("-----------------------Authentication System------------------\n\n");

    printf("Enter Choice -->> ");
    scanf("%d", &choice);

    system("cls");

    switch(choice)
    {
        case 1:
        {
            login();
            break;
        }
        case 2:
        {
            if(ptr < 5)
            {
                create();
                flag = 1;
            }
            else
            {
                printf("Memory Full");
                getch();
                system("cls");
            }
            flag = 0;
            break;
        }
        case 3:
        {
            update();
            break;
        }
        case 4:
        {
            del();
            break;
        }
        case 5:
        {
            exit(0);
            break;
        }

    }
}

int checkUsername(void)
{
    if(arrayEmpty == 0)
        return 1;
    else
    {
        for(int i = 0; i < 5; i++)
        {
            if(strcmp(username[i], username_input))
            {
                continue;
            }
            else
            {
                chkPass = i;
                flag = 0;
                return 0;
            }
        }
    }
    return 1;
}

int checkPassword(void)
{
    if(strcmp(password[chkPass], password_input))
    {
        printf("\nWrong Password\n");
        return 0;
    }
    else
    {
        return 1;
    }
}

void login(void)
{
    fflush(stdin);
    printf("Enter Username >>> ");
    gets(username_input);

    if(checkUsername())
    {
        system("cls");
        printf("No Username Exist. Please Create New Username and Password\n");
        getch();
        system("cls");
    }
    else
    {
        printf("Enter Password >>> ");
        gets(password_input);

        if(checkPassword())
        {
            printf("Log In Successfully");
        }
    }
}

void create()
{
    fflush(stdin);

    printf("Enter New Username >>> ");
    gets(username_input);

    if(checkUsername() || flag == 1)
    {
        strcpy(username[ptr], username_input);

        printf("Enter New Password >>> ");
        gets(password[ptr]);

        printf("\nUsername And Password Set Successfully\n");

        ptr = ptr + 1;
        arrayEmpty = 1;
        flag = 0;

        getch();
        system("cls");
    }
    else
    {
        printf("\nUsername And Password Already Set\n");
    }
}

void update(void)
{
    char ans;

    fflush(stdin);
    printf("Enter Username >>> ");
    gets(username_input);


    if(checkUsername())
    {
        printf("Username Not Exist");
        getch();
        system("cls");
    }
    else
    {
        printf("If You Want To Update Username ? y/n = ");
        scanf("%c", &ans);

        if(ans == 'y' || ans == 'Y')
        {
            fflush(stdin);
            printf("Enter New Username >>> ");
            gets(username[chkPass]);
        }

        printf("If You Want To Update Password ? y/n = ");
        scanf("%c", &ans);

        if(ans == 'y' || ans == 'Y')
        {
            fflush(stdin);
            printf("Enter New Password >>> ");
            gets(password[chkPass]);
        }
    }
}

void del(void)
{
    fflush(stdin);
    printf("Enter Username >>> ");
    gets(username_input);

    if(checkUsername())
    {
        printf("Username Not Exist");
        getch();
        system("cls");
    }
    else
    {
        if(chkPass == (ptr-1))
        {
            strcpy(username[chkPass], "NULL");
            strcpy(password[chkPass], "NULL");

            ptr = chkPass;

            printf("Username & Password deleted successfuly");
            getch();
            system("cls");
        }
        else
        {
            strcpy(username[chkPass], username[ptr-1]);
            strcpy(password[chkPass], password[ptr-1]);

            ptr = ptr - 1;

            printf("Username & Password deleted successfuly");
            getch();
            system("cls");
        }
    }
}
