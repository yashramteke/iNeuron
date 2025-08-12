/*Q8. Create a function to search the element in the set.*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> s = {10, 20, 30, 40, 60, 50};
    set <int>::iterator it = s.begin();

    int x;
    int flag = 0;

    cout<<"Enter element = ";
    cin>>x;

    for(; it != s.end(); it++)
    {
        if((*it) == x)
        {
            cout<<"element found";
            flag = 1;
        }
    }

    if(!flag)
    {
        cout<<"element not found";
    }


}
