/*Q5. Write a c++ program, to show that priority_queue is by default a Max Heap.
Note:
If elements are printed in descending order, then we have a max heap.*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Creating a priority_queue (by default max heap)
    priority_queue<int> pq;

    // Inserting elements
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);
    pq.push(40);

    // Printing elements
    cout << "Elements in priority_queue (Max Heap): ";
    while(!pq.empty())
    {
        cout << pq.top() << " ";  // Always gives the largest element
        pq.pop();
    }

    return 0;
}
