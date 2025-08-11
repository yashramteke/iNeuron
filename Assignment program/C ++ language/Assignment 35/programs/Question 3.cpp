/*Q3. Write a C++ program to find the largest of three elements using a template.*/

#include <iostream>
using namespace std;

template <typename A = int, typename B = int, typename C = int, typename X = int>
X Large(A a, B b, C c)
    {
        if(a > b)
        {
            if(a > c)
            {
                return a;
            }
            else
            {
                return c;
            }
        }
        else
        {
            if(b > c)
            {
                return b;
            }
            else
            {
                return c;
            }
        }
    }

int main()
{
    cout<<"int float double = "<<Large<int, float, double, double>(5, 6.5f, 7.5)<<endl;
    cout<<"int float double = "<<Large<int, float, double, int>(5, 6.5f, 7.5)<<endl;
    cout<<"int float double = "<<Large(5, 6.5f, 7.5)<<endl;
}
