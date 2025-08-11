/*Q6. Create two forward lists of int type, and merge them.*/

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list <int> f1 = {10, 20, 30, 40, 50};
    forward_list <int> f2 = {60, 70, 80, 90, 100};

    f1.merge(f2);

    for(int x: f1)
    {
        cout<<x<<" ";
    }
}
