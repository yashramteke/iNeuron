/*Q7. Insert the element at beginning and end of the list | C++ STL*/

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <int> l = {3, 2, 9};

    l.push_front(10);
    l.push_back(20);

    for(int x: l)
    {
        cout<<x<<" ";
    }
}
