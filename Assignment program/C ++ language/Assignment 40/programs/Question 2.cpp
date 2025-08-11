/*Q2. Returns a reverse iterator which points to the last element of the deque (i.e., its
reverse beginning).*/

#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

int main()
{
    deque <int> d = {10, 20, 30, 40, 50};

    deque <int>::reverse_iterator rit = d.rbegin();

    for(int i = 0; i < d.size(); i++, rit++)
    {
        cout<<*rit<<" ";
    }
}
