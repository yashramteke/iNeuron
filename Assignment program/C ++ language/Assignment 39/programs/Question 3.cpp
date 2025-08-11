/*Q3. Iterate a list C++ STL*/

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <int> l = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

   list <int>::iterator it = l.begin();

    while( it != l.end())
    {
        cout<<*it<<" ";
        it++;
    }

}
