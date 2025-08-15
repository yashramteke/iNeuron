/*Q8. Create a c++ program using multiset and removes all the occurrences of x –> O(log n)*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset <int> s = {10, 20, 30, 10, 20, 30, 40, 50};

    s.erase(10);
    s.erase(20);
    s.erase(30);

    for(int x : s) cout<<x<<" ";
}
