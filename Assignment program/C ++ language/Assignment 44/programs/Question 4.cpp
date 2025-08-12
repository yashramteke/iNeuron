/*Q4. Checks whether the set is empty or not.if it is empty insert 5 elements in the set*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> s;

    if(s.empty())
    {
        cout<<"set is empty";
        for(int i = 1; i < 6; i++)
        {
            s.insert(i * 10);
        }
    }
    else
    {
            cout<<"set is not empty";
    }
}
