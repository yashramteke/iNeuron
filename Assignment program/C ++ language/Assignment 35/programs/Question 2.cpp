/*Q2. Write a C++ Program to find Largest among two numbers using function template.*/

#include <iostream>
using namespace std;

template <typename X>
X Large(X a, X b);

int main()
{
    cout<<"float = "<<Large<float>(5, 5.6f)<<endl;
    cout<<"int = "<<Large<int>(5.5f, 6);
}

template <typename X>
X Large(X a, X b)
{
    return (a>b)? a: b;
}
