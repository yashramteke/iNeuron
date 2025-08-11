/*Q1. Print all elements of a queue in C++ STL*/

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> s;


    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);


    while (!s.empty()) {
        cout << s.front() << " ";
        s.pop();
    }

    return 0;
}
