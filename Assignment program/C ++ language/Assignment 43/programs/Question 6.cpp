/*Q6. Write a c++ program, to use priority_queue to implement min heap.*/

#include <iostream>
#include <queue>
//#include <vector>   // vector is needed for min heap
using namespace std;

int main()
{
    // Min Heap using priority_queue
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Inserting elements
    minHeap.push(30);
    minHeap.push(10);
    minHeap.push(50);
    minHeap.push(20);
    minHeap.push(40);

    // Printing elements (ascending order)
    cout << "Elements in Min Heap (ascending order): ";
    while(!minHeap.empty())
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }

    return 0;
}
