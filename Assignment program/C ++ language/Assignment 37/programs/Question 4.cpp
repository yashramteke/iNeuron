/*Q4. Write a program to Copy one vector’s elements to another vector.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v = { 10, 20, 30, 40, 50};

    vector <int> v2 = v;

    for(int x : v2) cout<<x<<" ";

}
