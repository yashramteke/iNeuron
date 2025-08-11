/*Q1. Inserts an element. And returns an iterator that points to the first of the newly inserted
elements.*/

#include <iostream>
#include <iterator>
#include <deque>
using namespace std;

int main()
{
    deque <int> d = {10, 20, 30};

    auto it = d.insert(d.begin()+1, 100);
    cout<<*it<<endl;

}
