/*Q5. Find largest and smallest elements in a vector*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v = {20, 50, 10, 40, 30};

    int small = 0, large = 0;

    for(int i = 0, j = i + 1; j < v.size(); j++)
    {

        if(v[i] < v[j])
        {
            small = v[i];
        }
        else
        {
            small = v[j];
            i = j;
        }
    }
    cout<<"smallest element = "<<small<<endl;

    for(int i = 0, j = i + 1; j < v.size(); j++)
    {

        if(v[i] > v[j])
        {
            large = v[i];
        }
        else
        {
            large = v[j];
            i = j;
        }
    }
    cout<<"largest element = "<<large;
}
