/*Q8. Remove elements from a container from the specified position or range in deque.*/

#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

int main()
{
    deque <int> l = {1, 2, 3, 4, 5, 6, 7};

    int pos = 0;

    cout<<"enter position = ";
    cin>>pos;

    deque <int>::iterator it = l.begin() + pos;

    cout<<*it;
}
