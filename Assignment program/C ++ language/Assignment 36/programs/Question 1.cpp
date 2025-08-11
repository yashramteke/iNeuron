/*Q1. Using STL Array gets and sets a reference to an element based on a given index.*/

#include <iostream>
#include <array>
using namespace std;

int& gets(array <int, 5> &arr, int index);


int main()
{
    array <int, 5> arr = {10, 20, 30, 40, 50};

    int index = 0, value = 0;


    cout<<"Enter index = ";
    cin>>index;

    cout<<"Enter value = ";
    cin>>value;

    gets(arr, index) = value;

    for(int x : arr) cout<<x<<" ";
}

int& gets(array <int, 5> &arr, int index)
{
    return arr[index];
}
