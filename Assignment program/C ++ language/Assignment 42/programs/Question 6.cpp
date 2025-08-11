/*Q6. In C++ STL, Queue is a type of container that follows FIFO (First-in-First-Out)
elements arrangement i.e. the elements which insert first will be removed first. In the
queue, elements are inserted at one end known as "back" and are deleted from
another end known as "front".empty() and size() function of the queue with the
Example.*/

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Initially queue is empty
    if (q.empty()) {
        cout << "Queue is empty\n";
    }

    // Inserting elements
    q.push(10);
    q.push(20);
    q.push(30);

    // Now queue is not empty
    if (!q.empty()) {
        cout << "Queue is not empty\n";
    }

    // Size of queue
    cout << "Size of queue: " << q.size() << endl;

    // Let's remove one element
    q.pop();

    // New size
    cout << "Size after one pop: " << q.size() << endl;

    return 0;
}

