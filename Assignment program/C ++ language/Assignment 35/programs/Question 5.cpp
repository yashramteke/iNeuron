/*Q5. Write a C++ Program to Add two numbers using function template.*/

#include <iostream>
using namespace std;

template <typename T>
T add( T a, T b);

int main()
{
    cout<<"int = "<<add<int>(5, 5)<<endl<<endl;
    cout<<"float = "<<add<float>(5.5f, 5)<<endl<<endl;
    cout<<"double = "<<add<double>(5.6, 5.6)<<endl<<endl;
}

template <typename T>
T add( T a, T b)
{
    return a + b;
}
