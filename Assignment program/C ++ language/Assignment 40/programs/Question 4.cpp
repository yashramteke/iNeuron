/*Q4. Returns a constant iterator pointing to the first element of the container, that is, the
iterator cannot be used to modify, only traverse the deque.*/

#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

int main()
{
    deque <int> f ={10, 20, 30, 40, 50};

    deque <int>::const_iterator it = f.begin();

    while(it != f.end())
    {
        cout<<*it<<" ";
        it++;
    }
}
