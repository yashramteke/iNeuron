/*Q3. Create a forward list insert elements from 1 to 10 and find the sum of elements.*/

#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main()
{
    forward_list <int> f = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    f.sort();

    int sum = 0;

    forward_list <int>::iterator it = f.begin();

    while( it != f.end())
    {
        sum = sum + (*it);
        it++;
    }

    cout<<"sum = "<<sum;
}
