/*Q9. Adds the element ‘g’ at the end of the queue.*/

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<char> q;


    q.push('a');
    q.push('b');
    q.push('c');


    q.push('g');

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
