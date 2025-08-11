/*Q4. Write a program to reverse forward list elements.*/

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list <int> f ={10, 20, 30, 40, 50};

    f.reverse();

    for(auto it = f.begin(); it != f.end(); it++)
    {
        cout<<*it<<" ";
    }
}
