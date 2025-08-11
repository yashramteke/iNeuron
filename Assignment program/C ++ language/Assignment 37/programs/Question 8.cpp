/*Q8. Write a program to find common elements between two vectors.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v1 = {50, 10, 40, 30, 20};
    vector <int> v2 = {90, 70, 30, 80, 10};
    vector <int> common;

    for(int i = 0; i < v1.size(); i++)
    {
        for(int j = 0; j < v2.size(); j++)
        {
            if(v1[i] == v2[j])
            {
                common.push_back(v2[j]);
            }
        }
    }

    cout<<"common element = ";
    for(int x : common) cout<<x<<" ";
}
