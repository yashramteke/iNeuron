/*Q10. Write a program to check whether an element exists in a vector or not.*/

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector <int> v = {10, 20, 30, 40, 50, 60, 70};

    int ch = 0, flag = 1;

    cout<<"Enter element to find = ";
    cin>>ch;

    for(int i = 0; i < v.size(); i++)
    {
        if(ch == v[i])
        {
            cout<<"Element found";
            flag = 0;
            break;
        }
        else
        {
            continue;
        }
    }

    if(flag)
    {
        cout<<"Element not found";
    }
}
