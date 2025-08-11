//Q8.Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words.
//(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”, OUTPUT : 1 )

#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][20] = {
                        {"apple"},
                        {"grapes"},
                        {"house"},
                        {"tiger"},
                        {"grapes"}
                      };

    char word1[20], word2[20];
    int i = 0, count1 = 0, count2 = 0, flag1 = 0, flag2 = 0;

    printf("Enter word1 : ");
    scanf("%s", word1);

    printf("Enter word2 : ");
    scanf("%s", word2);

    for(; i < 5; i++)
    {
        if(!strcmp(str[i], word1) && flag1 == 0)
        {
            count1 = i;
            flag1 = 1;
        }
        else if(!strcmp(str[i], word2) && flag2 == 0)
        {
            count2 = i;
            flag2 = 1;
        }
        else if(flag1 == 1 && flag2 == 1)
        {
            break;
        }
    }

    if(count1<count2)
    {
        printf("Word1 : %d",count1);
    }
    else
    {
        printf("Word2 : %d",count2);
    }
}
