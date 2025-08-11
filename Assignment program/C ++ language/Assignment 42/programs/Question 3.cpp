/*Q3. Check if a queue is empty or not using queue::size() function*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <int> q;

    if(q.size())
    {
        cout<<"queue is not empty";
    }
    else
    {
        cout<<"queue is empty";
    }

}
