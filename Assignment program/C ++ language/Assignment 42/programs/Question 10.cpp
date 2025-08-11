/*Q10. Deletes the first element of the queue.*/

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Before pop, front = " << q.front() << endl;

    // Remove the first element
    q.pop();

    cout << "After pop, front = " << q.front() << endl;

    return 0;
}
