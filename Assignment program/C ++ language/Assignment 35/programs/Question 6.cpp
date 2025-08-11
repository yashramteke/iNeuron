/*Q6. Write a C++ Program to find Sum of Array using function template.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0, sum = 0, p = 0;

    cout<<"How many elements you want to enter = ";
    cin>>n;

    vector<int> v(n);

    cout<<"Enter element in v"<<endl<<endl;

    for(int i = 0; i < n; i++)
    {
        cout<<i<<") position = ";
        cin>>p;

        v.insert(v.begin()+i, p);
    }

    for(int i = 0; i < v.size(); i++)
    {
        sum = sum + v.at(i);
    }

    cout<<"Addition = "<<sum;
}
