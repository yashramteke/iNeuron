/*Q11. How to get the first and last elements of Deque in c++?*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque <int> l = {1, 2, 3, 4, 5, 6, 7};

    cout<<"first = "<<l.front()<<endl;
    cout<<"last = "<<l.back();
}
