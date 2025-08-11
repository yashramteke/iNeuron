/*Q6. Using STL to check whether an array is empty or not.*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int, 5> arr;

    if(!arr.empty())
        cout<<"array is empty";
    else
        cout<<"array is not empty";

}
