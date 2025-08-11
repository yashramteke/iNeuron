/*Q5. Returns the maximum number of elements that a deque container can hold.*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque <int> f = {1, 2, 3, 4, 5};

    cout<<f.max_size();

}
