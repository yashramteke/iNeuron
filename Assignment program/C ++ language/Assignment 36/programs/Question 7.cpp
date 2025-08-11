/*Q7. Sort an array in ascending order using sort() function in C++ STL*/

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    array <int, 5> arr = {50, 10, 40, 30, 20};

    sort(arr.begin(), arr.end());

    for(int x : arr) cout<<x<<" ";
}
