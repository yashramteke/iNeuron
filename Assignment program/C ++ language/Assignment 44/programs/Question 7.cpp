/*Q7. how to find the upper bound of any desired element from the set.*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> s = {10, 20, 30, 40, 50};

    set <int>::iterator it;

    int x;
    cout<<"enter number = ";
    cin>>x;

        it = s.find(x);
        if(it == s.end())
        {
            for (int i : s)
            {
                if(x < i)
                {
                    cout<<"upper bound = "<<i;
                    break;
                }
            }
        }
        else if((*it) == x)
        {
            it++;
            cout<<"upper bound = "<<*it;
        }
        else
        {
            cout<<"there is no upper bound";
        }

}
