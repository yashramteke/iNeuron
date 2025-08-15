/*Q5. Create a c++ program using multiset and returns whether the multiset is empty –> O(1)*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset <int> s;

    if(s.empty())
        cout<<"multiset empty";
    else
        cout<<"multiset not empty";
}
