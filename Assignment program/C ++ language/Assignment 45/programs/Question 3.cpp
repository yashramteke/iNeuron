/*Q3. Create a c++ program using multiset and returns the number of elements in the
multiset –> O(1)*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset <int> s = {10, 20, 30, 70, 10, 20};

    cout<<s.size();
}
