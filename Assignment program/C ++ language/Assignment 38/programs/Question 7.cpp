/*Q7. Below are two forward lists, first sort them and then merge them.
forwardlist1={3,2,9}
forwardlist2={8,1,2}*/

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list <int> forwardlist1 = {3, 2, 9};
    forward_list <int> forwardlist2 = {8,1,2};

    forwardlist1.sort();
    forwardlist2.sort();

    forwardlist2.merge(forwardlist1);

    for(int x: forwardlist2)
    {
        cout<<x<<" ";
    }
}
