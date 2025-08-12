/*Q5. Make a c++ program to insert unique element in set*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> s;

    int n = 0, x = 0;

    cout<<"How many elements you want to enter = ";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cout<<"Enter element = ";
        cin>>x;

        set <int>::iterator it = s.find(x);
        if(it == s.end())
        {
            s.insert(x);
            cout<<"element inserted"<<endl;
        }
        else
        {
            i = i - 1;
            cout<<"element already inserted"<<endl;
        }
    }
}
