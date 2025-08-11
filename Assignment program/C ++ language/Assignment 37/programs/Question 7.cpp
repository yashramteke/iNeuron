/*Q7. Write a program to find sum of vector elements*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v = {50, 10, 40, 30, 20};

    int sum = 0;

    for(int i = 0; i < v.size(); i++)
    {
        sum = sum + v[i];
    }

    cout<<"sum = "<<sum;
}
