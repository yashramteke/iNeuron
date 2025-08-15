/*Q2. Create a c++ program using multiset and returns an iterator to the theoretical
element that follows the last element in the multiset –> O(1)*/

#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    multiset <int> s = {10, 20, 30, 40};

    multiset  <int>::iterator it = s.end();

}
