/*Q3. Write a c++ program, to demonstrate priority queue having a min element at top.*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue < int, vector<int>, greater<int> > q;

    q.push(30);
    q.push(10);
    q.push(20);
    q.push(50);

    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
}
