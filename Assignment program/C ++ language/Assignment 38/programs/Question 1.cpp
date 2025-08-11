/*Q1. List functions in C++ STL (Standard Template Library)*/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> l;

    cout<<"insert element -> ";
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    for(int x : l) cout<<x<<" ";
    cout<<endl;

    cout<<"insert element in front -> "<<"40 50 60"<<endl;
    l.push_front(40);
    l.push_front(50);
    l.push_front(60);

    cout<<"pop element from back -> 30"<<endl;
    l.pop_back();

    cout<<endl<<"print list - > ";
    for(int x : l) cout<<x<<" ";
}
