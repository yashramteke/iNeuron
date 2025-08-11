/*Q7. Return the first element and last element of the deque container.*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque <int> l = {3, 2, 9};

    cout<<l.front()<<endl;
    cout<<l.back();
}
