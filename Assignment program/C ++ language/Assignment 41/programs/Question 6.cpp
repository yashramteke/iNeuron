/*Q6. Reverse a string using a stack.
Example:
Input: str = "Reverse me"
Output: em esreveR*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack <char> s;

    string str = "Reverse me";

    for(int i = 0; i < str.size(); i++)
        s.push(str[i]);

    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }

}
