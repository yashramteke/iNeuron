/*Q3. Write a function to print the element of a vector and take input from the user.*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    int x = 0;

    cout<<"Enter elements"<<endl<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<i<<") ";
        cin>>x;
        v.push_back(x);
    }

    cout<<endl<<endl;

    for(int x : v) cout<<x<<" ";

}
