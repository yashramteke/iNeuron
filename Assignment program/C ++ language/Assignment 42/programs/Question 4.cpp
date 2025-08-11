/*Q4. Manage a queue for multiple input and store in ascending order of his first character*/

#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int main()
{
    queue <string> q;
    vector <string> v;

    int n = 0, prv = 0, nxt = 0;
    string s, s1, s2;

    cout<<"How many strings are you input = ";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cout<<i<<") ";
        cin>>s;

        v.push_back(s);
        cin.ignore();
    }

    for(int i = 0; i < v.size(); i++)
    {
        for(int j = i + 1; j < v.size(); j++)
        {
            if(v.at(i) <= v.at(j))
            {
                continue;
            }
            else
            {
                string tmp = v.at(i);
                v.at(i) = v.at(j);
                v.at(j) = tmp;
            }
        }
    }

    for(int i = 0; i < v.size(); i++)
    {
        q.push(v.at(i));
    }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}
