/*Q4. Write a C++ Program to Swap data using function template.*/

#include <iostream>
using namespace std;

template <typename T>
void Swap(T a, T b)
{
    cout<<"Before swap"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;

    T c;

    c = a;
    a = b;
    b = c;

    cout<<"After swap"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
}

int main()
{
    Swap<int>(10, 20);
    Swap<float>(50.5f, 60.9f);
}
