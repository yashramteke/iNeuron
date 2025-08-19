/*Q10.  Given a positive integer N, the task is to check whether N can be represented as the
difference between two positive perfect cubes or not. If found to be true, then print
“Yes”. Otherwise, print “No” using a map.
Example:
Input: N = 124
Output: Yes
Explanation: Since 124 can be represented as (125 – 1) = (53 – 13). Therefore, print
Yes.*/

#include <iostream>
#include <map>
#include <cmath>
using namespace std;

bool diff(int d, map <int, int> &cube)
{
    for(const pair<int, int> &y : cube)
    {
        if(d == y.second)//d = 2
        {
            return true;
        }
        if(d < y.second)
        {
            return false;
        }
    }
    return false;
}

int main()
{
    int N, a, b;
    a = b = N = 0;

    cout<<"Enter N = ";
    cin>>N;

    map <int, int> cube;

    //insert cube in map
    for(int i = 0; i < 30; i++)
    {
        cube[i] = pow(i, 3);
    }

    //find a
    for(const pair<int, int> &x : cube)
    {
        if(x.second == N)
        {
            cout<<"Yes";
            break;
        }
        if( (x.second > N))//125>61
        {
            if(diff(x.second - N, cube))
            {
                cout<<"Yes";
                break;
            }
            else
            {
                if(((x.second - N) > N))
                {
                    cout<<"No";
                    break;
                }
            }

        }
    }
}
