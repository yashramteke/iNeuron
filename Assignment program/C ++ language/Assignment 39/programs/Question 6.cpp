/*Q6. Get the first and last element of the list C++ STL*/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> f1 = {10, 20, 30, 40, 50};

    cout<<"front = "<<f1.front();
    cout<<endl<<"back = "<<f1.back();
}
