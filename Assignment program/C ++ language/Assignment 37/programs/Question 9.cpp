/*Q9. Write a program to Push and print elements in a float vector*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <float> v;

    v.push_back(10.2);
    v.push_back(15.5);
    v.push_back(20.78);

    for(float x : v) cout<<x<<endl;
}
