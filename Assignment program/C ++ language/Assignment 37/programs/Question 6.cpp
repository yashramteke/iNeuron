/*Q6. Write a program to reverse vector elements*/

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector <int> v = {10, 20, 30, 40, 50};

    vector <int>::reverse_iterator rit = v.rbegin();

    while(rit != v.rend())
    {
        cout<<*rit<<" ";
        rit ++;
    }
}
