/*Q6. Assign values to the same or different deque container.*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque <int> f1 = {10, 20, 30, 40, 50};

    deque <int> f2(f1);

    for(int x : f2) cout<<x<<" ";
    cout<<endl;

    deque <int> f3;

    f3.assign(f1.begin(), f1.end());

    for(int x : f3) cout<<x<<" ";
    cout<<endl;
}
