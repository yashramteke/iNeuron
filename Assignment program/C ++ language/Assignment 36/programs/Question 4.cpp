/*Q4. Returns the element from the given index using the STL array.*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int, 5> arr = {10, 20, 30, 40, 50};

    cout<<"0 -> "<<arr.at(0)<<endl;
    cout<<"1 -> "<<arr.at(1)<<endl;
    cout<<"2 -> "<<arr.at(2)<<endl;
    cout<<"3 -> "<<arr.at(3)<<endl;
    cout<<"4 -> "<<arr.at(4)<<endl;

}
