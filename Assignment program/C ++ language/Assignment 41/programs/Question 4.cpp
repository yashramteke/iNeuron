/*Q4. Reverse the Words of a String using Stack.
Example:
Input: str = “I Love To Code”
Output: Code To Love I*/

#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str= "I love to code";
    string word;

    stack <string> s;

    int start = 0, space = 0;

    for(int i = 0; i <= str.size(); i++)
    {
        if(str[i] == ' ' || i == str.size())
        {
            space = space + 1;
            word = str.substr(start, i - start);
            if(space == 1)
            {
                s.push(word);
                start = i + 1;
            }
            else
            {
                s.push(word + ' ');
                start = i + 1;
            }
        }
    }

    while(s.size())
    {
        cout<<s.top();
        s.pop();
    }
}
