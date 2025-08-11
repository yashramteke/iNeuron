/*Q5. C++ STL program to demonstrate example of array::rbegin() and array::rend()
functions*/

#include <iostream>
#include <array>
#include <iterator>
using namespace std;

int main()
{
    array <int, 5> arr = {10, 20, 30, 40, 50};

    array <int, 5>::reverse_iterator rit = arr.rbegin();

    cout<<"using rbegin() -> ";
    while( rit != arr.rend())
    {
        cout<<*rit<<" ";
        rit++;
    }

    rit = arr.rend();
    rit = rit - 1;
    cout<<endl<<"using rend() -> ";
    while(true)
    {
        cout<<*rit<<" ";
        if(rit == arr.rbegin()) break;
        --rit;
    }

}
