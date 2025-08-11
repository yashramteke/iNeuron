/*Q1. Write a c++ code, to demonstrate the forward list.*/

#include <iostream>
#include <iterator>
#include <forward_list>
using namespace std;

int main()
{
    forward_list <int> f;
    int e = 0;

    cout<<"Enter 5 elements in forward list = "<<endl;

    for(int i = 0; i < 5; i++)
    {
        cout<<i<<") = ";
        cin>>e;
        f.push_front(e);
    }

    cout<<"Display forward list"<<endl;
    forward_list <int> ::iterator it;
    it = f.begin();

    for(int i = 0; i < 5; i++, it++)
    {
        cout<<i<<") "<<*it<<endl;
    }

    cout<<endl<<"Pop element from forward list"<<endl;
    for(it = f.begin(); it != f.end(); it = f.begin())
    {
        cout<<*it<<" ";
        f.pop_front();
    }
}
