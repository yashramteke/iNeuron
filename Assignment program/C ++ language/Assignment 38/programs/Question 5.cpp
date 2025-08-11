/*Q5. Write a program remove all consecutive duplicate elements from the forward list*/

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list <int> f;

    f.assign({10,20,30,20,40,40,20,50});

    cout<<"Before removing duplicate elements"<<endl<<endl;

    for(auto it: f)
    {
        cout<<it<<" ";
    }

    cout<<endl<<endl<<"After removing duplicate elements"<<endl<<endl;

    f.remove(20);
    f.remove(40);

    for(auto it: f)
    {
        cout<<it<<" ";
    }

}
