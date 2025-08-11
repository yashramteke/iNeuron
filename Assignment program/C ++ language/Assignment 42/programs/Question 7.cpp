/*Q7. Exchange the contents of two queues but the queues must be of the same data type,
although sizes may differ.*/

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    queue <int> q1, q2;

    for(int i = 1; i <= 5; i++)
    {
        q1.push(i*100);
    }

    for(int i = 1; i <= 5; i++)
    {
        q2.push(i*1000);
    }

    swap(q1, q2);

    cout<<"q1 = ";
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }

    cout<<endl<<"q2 = ";
    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }

}
