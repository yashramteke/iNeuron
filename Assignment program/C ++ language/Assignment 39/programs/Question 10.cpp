/*Q10. Assign the elements to the list (different methods) - Example of list::assign() | C++
STL*/

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <int> l;

    l.push_back(10);
    l.push_front(20);

    list <int >::iterator it = l.begin();
    advance(it, 1);
    l.insert(it, 99);

    for(int x : l) cout<<x<<" ";

    cout<<endl<<"after assign function : ";
    l.assign(3, 4);
    for(int x : l) cout<<x<<" ";
}
