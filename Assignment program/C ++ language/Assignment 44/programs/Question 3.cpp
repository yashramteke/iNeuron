/*Q3. Erase an element from a set.*/

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set <int> q = {10, 20, 30, 70};

    q.erase(30);

    for(int x : q) cout<<x<<" ";
}
