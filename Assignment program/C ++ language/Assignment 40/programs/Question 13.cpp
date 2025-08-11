/*Q13. Segregate even and odd nodes in a Linked List using Deque.*/

#include <iostream>
#include <deque>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque <int> d;

    list <int>::iterator lit = l.begin();

    for(; lit != l.end(); lit++)
    {
        if( (*lit) % 2 > 0 )
        {
            d.push_front(*lit);
        }
        else
        {
            d.push_back(*lit);
        }
    }

    cout<<"odd = ";
    for(int i = 0; i < d.size(); i++)
    {
        if(d[i] % 2 > 0)
            cout<<d[i];
    }
    cout<<endl<<"even = ";
    for(int i = 0; i < d.size(); i++)
    {
        if(d[i] % 2 == 0)
            cout<<d[i];
    }


}

