/*Q1. Write a C++ program to demonstrate the addition of multiple types of data using
generic functions or templates.*/

#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

template <typename A, typename B, typename C>
C add(A a, B b);

template <typename T>
T ans;

int main()
{
    ans<int> = add<int, int, int>(5, 4);
    cout<<"Addition (int) = "<<ans<int><<endl;

    ans<float> = add<float, float, float>(5.5f, 5.2f);
    cout<<"Addition (float) = "<<ans<float><<endl;

    ans<double> = add<int, float, double>(7, 5.1);
    cout<<"Addition (double) = "<<ans<double><<endl;
}

template <typename A, typename B, typename C>
C add(A a, B b)
{
    C c = a + b;

    return c;
}
