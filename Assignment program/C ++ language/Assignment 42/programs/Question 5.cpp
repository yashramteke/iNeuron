/*Q5. Schedule a interview by using applicant's reaching time using c++ STL*/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    queue <float> q;
    vector <float> v = {10.30, 7.00, 8.45, 12.00, 9.15};

    for(int i = 0; i < v.size(); i++)
    {
        for(int j = i + 1; j < v.size(); j++)
        {
            if(v.at(i) < v.at(j))
            {
                continue;
            }
            else
            {
                float tmp = v.at(i);
                v.at(i) = v.at(j);
                v.at(j) = tmp;
            }
        }
    }

    while(!v.empty())
    {
        q.push(v.front());
        v.erase(v.begin());
    }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }


}
