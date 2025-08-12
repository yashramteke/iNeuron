/*Q2. Using inbuilt function and insert an element to the set container.*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> q = {10, 20, 30, 40};

    q.insert(5);

    for(int x: q) cout<<x<<" ";

}
