/*Q4. Write a c++ program, to swap the elements of two priority queues of int type.*/

#include <iostream>
#include <queue>
using namespace std;

void swapping(priority_queue <int> &q1, priority_queue <int> &q2);

int main()
{
    priority_queue <int> q1;
    priority_queue <int> q2;

    for(int i = 1; i < 5; i++)
    {
        q1.push(i * 10);
    }

    for(int i = 1; i < 5; i++)
    {
        q2.push(i * 20);
    }

    swapping(q1, q2);

    cout<<"q1 = ";
    while(!q1.empty())
    {
        cout<<q1.top()<<" ";
        q1.pop();
    }

    cout<<endl<<"q2 = ";
    while(!q2.empty())
    {
        cout<<q2.top()<<" ";
        q2.pop();
    }
}

void swapping(priority_queue <int> &q1, priority_queue <int> &q2)
{
    priority_queue <int> tmp;

    while(!q1.empty())
    {
        tmp.push(q1.top());
        q1.pop();
    }

    while(!q2.empty())
    {
        q1.push(q2.top());
        q2.pop();
    }

    while(!tmp.empty())
    {
        q2.push(tmp.top());
        tmp.pop();
    }
}
