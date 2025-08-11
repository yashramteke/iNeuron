/*Q2. Write a c++ code, in which create a forward list and assign values to it at the time of
initialization and print it on the console screen.*/

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list <int> f ={10, 20, 30, 40, 50};

    for(auto it = f.begin(); it != f.end(); it++)
    {
        cout<<*it<<" ";
    }

}
