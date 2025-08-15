/*Q1. Create a c++ program using multiset and returns an iterator to the first element in
the multiset –> O(1)*/

#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main() {
    multiset <int> s = {10, 20, 30, 10, 20, 30};

    multiset <int>::iterator it = s.begin();

    cout<<*it;

}
