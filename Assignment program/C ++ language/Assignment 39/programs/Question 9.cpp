/*Q9. Write a C++ code to demonstrate working of splice_after() in forward list.*/

#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main()
{
    forward_list <int> f1 = {10, 20, 30, 40, 50};
    forward_list <int> f2 = {1, 2, 3};



    f1.splice_after(f1.before_begin(), f2);


    for(int x : f1)cout<<x<<" ";
}
