/*Q3. Returns a reverse iterator which points to the position before the beginning of the
deque (which is considered its reverse end).*/

#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

int main()
{
    deque <int> d = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

   deque <int>::reverse_iterator rit = d.rend();

   cout<<*rit;

}
