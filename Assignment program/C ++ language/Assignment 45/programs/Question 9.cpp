/*Q9. Create a c++ program using multiset and remove only one instance of element from multiset having same value*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset <int> s = {10, 20, 30, 20, 40, 10};

    multiset <int>::iterator j = s.begin();

    for(auto i = s.begin(); i != s.end(); i++ )
    {
        j = i;
        j++;

        if((*i) == *(j))
        {
            s.erase(j);
        }
        else
        {
            break;
        }
    }

    for(int x : s) cout<<x<<" ";
}
