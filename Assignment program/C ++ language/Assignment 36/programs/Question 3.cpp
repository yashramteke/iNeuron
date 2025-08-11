/*Q3. Find the first and last element using the STL array.*/

#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <int, 5> arr = {10, 20, 30, 40, 50};

    cout<<"First element = "<<arr.front()<<endl;
    cout<<"Last element = "<<arr.back()<<endl;

}
