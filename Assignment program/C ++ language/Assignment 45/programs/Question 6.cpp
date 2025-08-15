/*Q6. Create a c++ program using multiset and inserts the element x in the multiset –> O(log n)*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset <int> s;

    int x;

    cout<<"Enter element = ";
    cin>>x;

    s.insert(x);


}
