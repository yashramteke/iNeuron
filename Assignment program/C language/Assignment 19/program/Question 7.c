//Q7.From the list of IP addresses, check whether all ip addresses are valid.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][20] = {
                        {"192.168.1.1"},
                        {"256.7845.1.2"},
                        {"255.106.45.200"},
                        {"1984.150.20.74"},
                        {"4.154.201.0"}
                      };

    int num = 0;
    int flag = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; str[i][j] != '\0'; j++)
        {
            if(str[i][0] == '0')
            {
                printf("Wrong IP : %s\n\n", str[i]);
                flag = 1;
                break;
            }
            else if(str[i][j] != '.')
            {
                num = (num * 10) + (str[i][j] - 48);
               // printf("%d ",num);
            }
            else if(num > 255)
            {
                printf("Wrong IP : %s\n\n", str[i]);
                flag = 1;
                num = 0;
                break;
            }
            else
            {
                num = 0;
            }
        }

        if(flag == 0)
        {
            printf("Valid IP : %s\n\n", str[i]);
        }
        else
        {
            flag = 0;
        }

        num = 0;

    }
}
