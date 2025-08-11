/*Q8. Remove all occurrences of an element and remove set of some specific from the list
C++ STL*/

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <int> l = {1, 2, 1, 5, 3, 2, 4, 5, 6, 7, 3};

    list <int>::iterator it;
    it = l.begin();

    for(; it != l.end(); it = l.begin())
    {
        list <int>::iterator jt = l.begin();
        advance(jt, 1);

        for(; jt != l.end(); jt++)
        {
            cout<<*jt<<" ";
           if((*it) == (*jt))
            {
                l.remove(*jt);
                break;
            }
        }

        if(jt == l.end())
        {
            it++;
        }
    }


    //for(int x : l) cout<<x<<" ";
}
