/*Q2. Using STL Array returns the total number of elements in the array.*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int, 5> arr = {10, 20, 30, 40, 50};

    cout<<"Total elements = "<<arr.size();
}
