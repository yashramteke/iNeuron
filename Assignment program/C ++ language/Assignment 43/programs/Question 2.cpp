/*Q2. Implement different operations on priority queue .i.e. adding element, removing
element, size of priority queue, and print it.*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue <int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    q.pop();

    cout<<q.size()<<endl;

    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
}
