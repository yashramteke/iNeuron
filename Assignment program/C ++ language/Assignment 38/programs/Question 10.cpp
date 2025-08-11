/*Q10. Write a program to assign values in forward_list using the values of another list*/

#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main()
{
    forward_list <int> f1 = {1, 2, 3};
    forward_list <int> f2;

    f2.assign(f1.begin(), f2.end());

    for(int x : f2) cout<<x<<" ";
}
