/*Q8. Create two forward lists of int type, and swap the elements of both forward lists with
each other.*/

#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main()
{
    forward_list <int> f1 = {1, 2, 3};
    forward_list <int> f2 = {10, 20, 30};

    cout<<"Before swapiing"<<endl<<endl;

    cout<<"f1 = ";
    for(forward_list <int>::iterator x = f1.begin(); x != f1.end(); x++)
    {
        cout<<*x<<" ";
    }

    cout<<endl<<"f2 = ";
    for(auto x : f2)
    {
        cout<<x<<" ";
    }

    cout<<endl<<endl<<"After swapping"<<endl;

    f1.swap(f2);

    cout<<endl<<"f1 = ";
    for(auto x : f1)
    {
        cout<<x<<" ";
    }

    cout<<endl<<"f2 = ";
    for(auto x : f2)
    {
        cout<<x<<" ";
    }
}
